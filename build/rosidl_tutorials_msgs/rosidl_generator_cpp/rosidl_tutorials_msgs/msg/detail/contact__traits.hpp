// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rosidl_tutorials_msgs:msg/Contact.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rosidl_tutorials_msgs/msg/contact.hpp"


#ifndef ROSIDL_TUTORIALS_MSGS__MSG__DETAIL__CONTACT__TRAITS_HPP_
#define ROSIDL_TUTORIALS_MSGS__MSG__DETAIL__CONTACT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rosidl_tutorials_msgs/msg/detail/contact__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rosidl_tutorials_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Contact & msg,
  std::ostream & out)
{
  out << "{";
  // member: first_name
  {
    out << "first_name: ";
    rosidl_generator_traits::value_to_yaml(msg.first_name, out);
    out << ", ";
  }

  // member: last_name
  {
    out << "last_name: ";
    rosidl_generator_traits::value_to_yaml(msg.last_name, out);
    out << ", ";
  }

  // member: phone_number
  {
    out << "phone_number: ";
    rosidl_generator_traits::value_to_yaml(msg.phone_number, out);
    out << ", ";
  }

  // member: phone_type
  {
    out << "phone_type: ";
    rosidl_generator_traits::value_to_yaml(msg.phone_type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Contact & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: first_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "first_name: ";
    rosidl_generator_traits::value_to_yaml(msg.first_name, out);
    out << "\n";
  }

  // member: last_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_name: ";
    rosidl_generator_traits::value_to_yaml(msg.last_name, out);
    out << "\n";
  }

  // member: phone_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "phone_number: ";
    rosidl_generator_traits::value_to_yaml(msg.phone_number, out);
    out << "\n";
  }

  // member: phone_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "phone_type: ";
    rosidl_generator_traits::value_to_yaml(msg.phone_type, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Contact & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace rosidl_tutorials_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rosidl_tutorials_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rosidl_tutorials_msgs::msg::Contact & msg,
  std::ostream & out, size_t indentation = 0)
{
  rosidl_tutorials_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rosidl_tutorials_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rosidl_tutorials_msgs::msg::Contact & msg)
{
  return rosidl_tutorials_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rosidl_tutorials_msgs::msg::Contact>()
{
  return "rosidl_tutorials_msgs::msg::Contact";
}

template<>
inline const char * name<rosidl_tutorials_msgs::msg::Contact>()
{
  return "rosidl_tutorials_msgs/msg/Contact";
}

template<>
struct has_fixed_size<rosidl_tutorials_msgs::msg::Contact>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rosidl_tutorials_msgs::msg::Contact>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rosidl_tutorials_msgs::msg::Contact>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROSIDL_TUTORIALS_MSGS__MSG__DETAIL__CONTACT__TRAITS_HPP_
