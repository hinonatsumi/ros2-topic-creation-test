#include <rclcpp/rclcpp.hpp>
#include <tutorial_interfaces/msg/int32_stamped.hpp>

using tutorial_interfaces::msg::Int32Stamped;

rclcpp::Node::SharedPtr g_node = nullptr;
void onNumberSubscribed(const Int32Stamped::SharedPtr msg)
{
  RCLCPP_INFO(g_node->get_logger(), "I heard : %d @ %d.%09d",
	      msg->data, msg->header.stamp.sec, msg->header.stamp.nanosec);
}

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);
  g_node = rclcpp::Node::make_shared("subscriber");
  auto sub = g_node->create_subscription<Int32Stamped>("number", 10, onNumberSubscribed);
  rclcpp::spin(g_node);
  g_node = nullptr;
  rclcpp::shutdown();
  return 0;
}
