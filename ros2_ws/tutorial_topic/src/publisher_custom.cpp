#include <rclcpp/rclcpp.hpp>
#include <tutorial_interfaces/msg/int32_staped.hpp>

using tutorial_interfaces::msg::Int32Stamped;

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);
  auto node = rclcpp::Node::make_shared("publisher");
  auto pub = node->create_publisher<Int32Stamped>("number", 10);
  rclcpp::WallRate loop(1);
  Int32Stamped msg;
  while(rclcpp::ok()){
    msg.data++;
    msg.header.stamp = node->now();
    int sec = msg.header.stamp.sec, nanosec = msg.header.stamp.nanosec;
    RCLCPP_INFO(node->get_logger(), "I publish : %d @ %d.%09d",  msg.data, sec, nanosec);
    pub->publish(msg);
    loop.sleep();
  }
  rclcpp::shutdown();
  return 0;
