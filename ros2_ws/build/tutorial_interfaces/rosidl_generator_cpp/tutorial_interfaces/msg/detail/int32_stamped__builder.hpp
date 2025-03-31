// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tutorial_interfaces:msg/Int32Stamped.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__MSG__DETAIL__INT32_STAMPED__BUILDER_HPP_
#define TUTORIAL_INTERFACES__MSG__DETAIL__INT32_STAMPED__BUILDER_HPP_

#include "tutorial_interfaces/msg/detail/int32_stamped__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace tutorial_interfaces
{

namespace msg
{

namespace builder
{

class Init_Int32Stamped_data
{
public:
  explicit Init_Int32Stamped_data(::tutorial_interfaces::msg::Int32Stamped & msg)
  : msg_(msg)
  {}
  ::tutorial_interfaces::msg::Int32Stamped data(::tutorial_interfaces::msg::Int32Stamped::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::msg::Int32Stamped msg_;
};

class Init_Int32Stamped_header
{
public:
  Init_Int32Stamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Int32Stamped_data header(::tutorial_interfaces::msg::Int32Stamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Int32Stamped_data(msg_);
  }

private:
  ::tutorial_interfaces::msg::Int32Stamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::msg::Int32Stamped>()
{
  return tutorial_interfaces::msg::builder::Init_Int32Stamped_header();
}

}  // namespace tutorial_interfaces

#endif  // TUTORIAL_INTERFACES__MSG__DETAIL__INT32_STAMPED__BUILDER_HPP_
