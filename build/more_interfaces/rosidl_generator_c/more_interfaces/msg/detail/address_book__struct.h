// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from more_interfaces:msg/AddressBook.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "more_interfaces/msg/address_book.h"


#ifndef MORE_INTERFACES__MSG__DETAIL__ADDRESS_BOOK__STRUCT_H_
#define MORE_INTERFACES__MSG__DETAIL__ADDRESS_BOOK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'address_book'
#include "rosidl_tutorials_msgs/msg/detail/contact__struct.h"

/// Struct defined in msg/AddressBook in the package more_interfaces.
typedef struct more_interfaces__msg__AddressBook
{
  rosidl_tutorials_msgs__msg__Contact__Sequence address_book;
} more_interfaces__msg__AddressBook;

// Struct for a sequence of more_interfaces__msg__AddressBook.
typedef struct more_interfaces__msg__AddressBook__Sequence
{
  more_interfaces__msg__AddressBook * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} more_interfaces__msg__AddressBook__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MORE_INTERFACES__MSG__DETAIL__ADDRESS_BOOK__STRUCT_H_
