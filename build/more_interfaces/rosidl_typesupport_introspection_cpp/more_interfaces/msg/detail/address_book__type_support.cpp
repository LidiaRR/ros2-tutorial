// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from more_interfaces:msg/AddressBook.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "more_interfaces/msg/detail/address_book__functions.h"
#include "more_interfaces/msg/detail/address_book__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace more_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void AddressBook_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) more_interfaces::msg::AddressBook(_init);
}

void AddressBook_fini_function(void * message_memory)
{
  auto typed_message = static_cast<more_interfaces::msg::AddressBook *>(message_memory);
  typed_message->~AddressBook();
}

size_t size_function__AddressBook__address_book(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<rosidl_tutorials_msgs::msg::Contact> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AddressBook__address_book(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<rosidl_tutorials_msgs::msg::Contact> *>(untyped_member);
  return &member[index];
}

void * get_function__AddressBook__address_book(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<rosidl_tutorials_msgs::msg::Contact> *>(untyped_member);
  return &member[index];
}

void fetch_function__AddressBook__address_book(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const rosidl_tutorials_msgs::msg::Contact *>(
    get_const_function__AddressBook__address_book(untyped_member, index));
  auto & value = *reinterpret_cast<rosidl_tutorials_msgs::msg::Contact *>(untyped_value);
  value = item;
}

void assign_function__AddressBook__address_book(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<rosidl_tutorials_msgs::msg::Contact *>(
    get_function__AddressBook__address_book(untyped_member, index));
  const auto & value = *reinterpret_cast<const rosidl_tutorials_msgs::msg::Contact *>(untyped_value);
  item = value;
}

void resize_function__AddressBook__address_book(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<rosidl_tutorials_msgs::msg::Contact> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AddressBook_message_member_array[1] = {
  {
    "address_book",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rosidl_tutorials_msgs::msg::Contact>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(more_interfaces::msg::AddressBook, address_book),  // bytes offset in struct
    nullptr,  // default value
    size_function__AddressBook__address_book,  // size() function pointer
    get_const_function__AddressBook__address_book,  // get_const(index) function pointer
    get_function__AddressBook__address_book,  // get(index) function pointer
    fetch_function__AddressBook__address_book,  // fetch(index, &value) function pointer
    assign_function__AddressBook__address_book,  // assign(index, value) function pointer
    resize_function__AddressBook__address_book  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AddressBook_message_members = {
  "more_interfaces::msg",  // message namespace
  "AddressBook",  // message name
  1,  // number of fields
  sizeof(more_interfaces::msg::AddressBook),
  false,  // has_any_key_member_
  AddressBook_message_member_array,  // message members
  AddressBook_init_function,  // function to initialize message memory (memory has to be allocated)
  AddressBook_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AddressBook_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AddressBook_message_members,
  get_message_typesupport_handle_function,
  &more_interfaces__msg__AddressBook__get_type_hash,
  &more_interfaces__msg__AddressBook__get_type_description,
  &more_interfaces__msg__AddressBook__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace more_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<more_interfaces::msg::AddressBook>()
{
  return &::more_interfaces::msg::rosidl_typesupport_introspection_cpp::AddressBook_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, more_interfaces, msg, AddressBook)() {
  return &::more_interfaces::msg::rosidl_typesupport_introspection_cpp::AddressBook_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
