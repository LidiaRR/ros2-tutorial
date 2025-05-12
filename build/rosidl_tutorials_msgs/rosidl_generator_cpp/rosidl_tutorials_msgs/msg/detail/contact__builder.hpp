// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rosidl_tutorials_msgs:msg/Contact.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rosidl_tutorials_msgs/msg/contact.hpp"


#ifndef ROSIDL_TUTORIALS_MSGS__MSG__DETAIL__CONTACT__BUILDER_HPP_
#define ROSIDL_TUTORIALS_MSGS__MSG__DETAIL__CONTACT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rosidl_tutorials_msgs/msg/detail/contact__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rosidl_tutorials_msgs
{

namespace msg
{

namespace builder
{

class Init_Contact_phone_type
{
public:
  explicit Init_Contact_phone_type(::rosidl_tutorials_msgs::msg::Contact & msg)
  : msg_(msg)
  {}
  ::rosidl_tutorials_msgs::msg::Contact phone_type(::rosidl_tutorials_msgs::msg::Contact::_phone_type_type arg)
  {
    msg_.phone_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosidl_tutorials_msgs::msg::Contact msg_;
};

class Init_Contact_phone_number
{
public:
  explicit Init_Contact_phone_number(::rosidl_tutorials_msgs::msg::Contact & msg)
  : msg_(msg)
  {}
  Init_Contact_phone_type phone_number(::rosidl_tutorials_msgs::msg::Contact::_phone_number_type arg)
  {
    msg_.phone_number = std::move(arg);
    return Init_Contact_phone_type(msg_);
  }

private:
  ::rosidl_tutorials_msgs::msg::Contact msg_;
};

class Init_Contact_last_name
{
public:
  explicit Init_Contact_last_name(::rosidl_tutorials_msgs::msg::Contact & msg)
  : msg_(msg)
  {}
  Init_Contact_phone_number last_name(::rosidl_tutorials_msgs::msg::Contact::_last_name_type arg)
  {
    msg_.last_name = std::move(arg);
    return Init_Contact_phone_number(msg_);
  }

private:
  ::rosidl_tutorials_msgs::msg::Contact msg_;
};

class Init_Contact_first_name
{
public:
  Init_Contact_first_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Contact_last_name first_name(::rosidl_tutorials_msgs::msg::Contact::_first_name_type arg)
  {
    msg_.first_name = std::move(arg);
    return Init_Contact_last_name(msg_);
  }

private:
  ::rosidl_tutorials_msgs::msg::Contact msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosidl_tutorials_msgs::msg::Contact>()
{
  return rosidl_tutorials_msgs::msg::builder::Init_Contact_first_name();
}

}  // namespace rosidl_tutorials_msgs

#endif  // ROSIDL_TUTORIALS_MSGS__MSG__DETAIL__CONTACT__BUILDER_HPP_
