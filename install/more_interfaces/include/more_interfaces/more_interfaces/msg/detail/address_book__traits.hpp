// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from more_interfaces:msg/AddressBook.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "more_interfaces/msg/address_book.hpp"


#ifndef MORE_INTERFACES__MSG__DETAIL__ADDRESS_BOOK__TRAITS_HPP_
#define MORE_INTERFACES__MSG__DETAIL__ADDRESS_BOOK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "more_interfaces/msg/detail/address_book__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'address_book'
#include "rosidl_tutorials_msgs/msg/detail/contact__traits.hpp"

namespace more_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const AddressBook & msg,
  std::ostream & out)
{
  out << "{";
  // member: address_book
  {
    if (msg.address_book.size() == 0) {
      out << "address_book: []";
    } else {
      out << "address_book: [";
      size_t pending_items = msg.address_book.size();
      for (auto item : msg.address_book) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AddressBook & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: address_book
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.address_book.size() == 0) {
      out << "address_book: []\n";
    } else {
      out << "address_book:\n";
      for (auto item : msg.address_book) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AddressBook & msg, bool use_flow_style = false)
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

}  // namespace more_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use more_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const more_interfaces::msg::AddressBook & msg,
  std::ostream & out, size_t indentation = 0)
{
  more_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use more_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const more_interfaces::msg::AddressBook & msg)
{
  return more_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<more_interfaces::msg::AddressBook>()
{
  return "more_interfaces::msg::AddressBook";
}

template<>
inline const char * name<more_interfaces::msg::AddressBook>()
{
  return "more_interfaces/msg/AddressBook";
}

template<>
struct has_fixed_size<more_interfaces::msg::AddressBook>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<more_interfaces::msg::AddressBook>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<more_interfaces::msg::AddressBook>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MORE_INTERFACES__MSG__DETAIL__ADDRESS_BOOK__TRAITS_HPP_
