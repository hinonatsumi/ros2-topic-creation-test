// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tutorial_interfaces:msg/Int32Stamped.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__MSG__DETAIL__INT32_STAMPED__TRAITS_HPP_
#define TUTORIAL_INTERFACES__MSG__DETAIL__INT32_STAMPED__TRAITS_HPP_

#include "tutorial_interfaces/msg/detail/int32_stamped__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tutorial_interfaces::msg::Int32Stamped>()
{
  return "tutorial_interfaces::msg::Int32Stamped";
}

template<>
inline const char * name<tutorial_interfaces::msg::Int32Stamped>()
{
  return "tutorial_interfaces/msg/Int32Stamped";
}

template<>
struct has_fixed_size<tutorial_interfaces::msg::Int32Stamped>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<tutorial_interfaces::msg::Int32Stamped>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<tutorial_interfaces::msg::Int32Stamped>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TUTORIAL_INTERFACES__MSG__DETAIL__INT32_STAMPED__TRAITS_HPP_
