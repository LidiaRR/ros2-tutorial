// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rosidl_tutorials_msgs:msg/Contact.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rosidl_tutorials_msgs/msg/contact.hpp"


#ifndef ROSIDL_TUTORIALS_MSGS__MSG__DETAIL__CONTACT__STRUCT_HPP_
#define ROSIDL_TUTORIALS_MSGS__MSG__DETAIL__CONTACT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rosidl_tutorials_msgs__msg__Contact __attribute__((deprecated))
#else
# define DEPRECATED__rosidl_tutorials_msgs__msg__Contact __declspec(deprecated)
#endif

namespace rosidl_tutorials_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Contact_
{
  using Type = Contact_<ContainerAllocator>;

  explicit Contact_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->first_name = "";
      this->last_name = "";
      this->phone_number = "";
      this->phone_type = 0;
    }
  }

  explicit Contact_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : first_name(_alloc),
    last_name(_alloc),
    phone_number(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->first_name = "";
      this->last_name = "";
      this->phone_number = "";
      this->phone_type = 0;
    }
  }

  // field types and members
  using _first_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _first_name_type first_name;
  using _last_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _last_name_type last_name;
  using _phone_number_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _phone_number_type phone_number;
  using _phone_type_type =
    uint8_t;
  _phone_type_type phone_type;

  // setters for named parameter idiom
  Type & set__first_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->first_name = _arg;
    return *this;
  }
  Type & set__last_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->last_name = _arg;
    return *this;
  }
  Type & set__phone_number(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->phone_number = _arg;
    return *this;
  }
  Type & set__phone_type(
    const uint8_t & _arg)
  {
    this->phone_type = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t PHONE_TYPE_HOME =
    0u;
  static constexpr uint8_t PHONE_TYPE_WORK =
    1u;
  static constexpr uint8_t PHONE_TYPE_MOBILE =
    2u;

  // pointer types
  using RawPtr =
    rosidl_tutorials_msgs::msg::Contact_<ContainerAllocator> *;
  using ConstRawPtr =
    const rosidl_tutorials_msgs::msg::Contact_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rosidl_tutorials_msgs::msg::Contact_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rosidl_tutorials_msgs::msg::Contact_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rosidl_tutorials_msgs::msg::Contact_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rosidl_tutorials_msgs::msg::Contact_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rosidl_tutorials_msgs::msg::Contact_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rosidl_tutorials_msgs::msg::Contact_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rosidl_tutorials_msgs::msg::Contact_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rosidl_tutorials_msgs::msg::Contact_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rosidl_tutorials_msgs__msg__Contact
    std::shared_ptr<rosidl_tutorials_msgs::msg::Contact_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rosidl_tutorials_msgs__msg__Contact
    std::shared_ptr<rosidl_tutorials_msgs::msg::Contact_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Contact_ & other) const
  {
    if (this->first_name != other.first_name) {
      return false;
    }
    if (this->last_name != other.last_name) {
      return false;
    }
    if (this->phone_number != other.phone_number) {
      return false;
    }
    if (this->phone_type != other.phone_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const Contact_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Contact_

// alias to use template instance with default allocator
using Contact =
  rosidl_tutorials_msgs::msg::Contact_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Contact_<ContainerAllocator>::PHONE_TYPE_HOME;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Contact_<ContainerAllocator>::PHONE_TYPE_WORK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Contact_<ContainerAllocator>::PHONE_TYPE_MOBILE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace rosidl_tutorials_msgs

#endif  // ROSIDL_TUTORIALS_MSGS__MSG__DETAIL__CONTACT__STRUCT_HPP_
