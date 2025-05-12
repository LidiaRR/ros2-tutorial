// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from more_interfaces:msg/AddressBook.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "more_interfaces/msg/address_book.hpp"


#ifndef MORE_INTERFACES__MSG__DETAIL__ADDRESS_BOOK__BUILDER_HPP_
#define MORE_INTERFACES__MSG__DETAIL__ADDRESS_BOOK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "more_interfaces/msg/detail/address_book__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace more_interfaces
{

namespace msg
{

namespace builder
{

class Init_AddressBook_address_book
{
public:
  Init_AddressBook_address_book()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::more_interfaces::msg::AddressBook address_book(::more_interfaces::msg::AddressBook::_address_book_type arg)
  {
    msg_.address_book = std::move(arg);
    return std::move(msg_);
  }

private:
  ::more_interfaces::msg::AddressBook msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::more_interfaces::msg::AddressBook>()
{
  return more_interfaces::msg::builder::Init_AddressBook_address_book();
}

}  // namespace more_interfaces

#endif  // MORE_INTERFACES__MSG__DETAIL__ADDRESS_BOOK__BUILDER_HPP_
