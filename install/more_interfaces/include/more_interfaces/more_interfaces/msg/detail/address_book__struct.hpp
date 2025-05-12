// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from more_interfaces:msg/AddressBook.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "more_interfaces/msg/address_book.hpp"


#ifndef MORE_INTERFACES__MSG__DETAIL__ADDRESS_BOOK__STRUCT_HPP_
#define MORE_INTERFACES__MSG__DETAIL__ADDRESS_BOOK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'address_book'
#include "rosidl_tutorials_msgs/msg/detail/contact__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__more_interfaces__msg__AddressBook __attribute__((deprecated))
#else
# define DEPRECATED__more_interfaces__msg__AddressBook __declspec(deprecated)
#endif

namespace more_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AddressBook_
{
  using Type = AddressBook_<ContainerAllocator>;

  explicit AddressBook_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit AddressBook_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _address_book_type =
    std::vector<rosidl_tutorials_msgs::msg::Contact_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rosidl_tutorials_msgs::msg::Contact_<ContainerAllocator>>>;
  _address_book_type address_book;

  // setters for named parameter idiom
  Type & set__address_book(
    const std::vector<rosidl_tutorials_msgs::msg::Contact_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rosidl_tutorials_msgs::msg::Contact_<ContainerAllocator>>> & _arg)
  {
    this->address_book = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    more_interfaces::msg::AddressBook_<ContainerAllocator> *;
  using ConstRawPtr =
    const more_interfaces::msg::AddressBook_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<more_interfaces::msg::AddressBook_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<more_interfaces::msg::AddressBook_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      more_interfaces::msg::AddressBook_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<more_interfaces::msg::AddressBook_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      more_interfaces::msg::AddressBook_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<more_interfaces::msg::AddressBook_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<more_interfaces::msg::AddressBook_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<more_interfaces::msg::AddressBook_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__more_interfaces__msg__AddressBook
    std::shared_ptr<more_interfaces::msg::AddressBook_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__more_interfaces__msg__AddressBook
    std::shared_ptr<more_interfaces::msg::AddressBook_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AddressBook_ & other) const
  {
    if (this->address_book != other.address_book) {
      return false;
    }
    return true;
  }
  bool operator!=(const AddressBook_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AddressBook_

// alias to use template instance with default allocator
using AddressBook =
  more_interfaces::msg::AddressBook_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace more_interfaces

#endif  // MORE_INTERFACES__MSG__DETAIL__ADDRESS_BOOK__STRUCT_HPP_
