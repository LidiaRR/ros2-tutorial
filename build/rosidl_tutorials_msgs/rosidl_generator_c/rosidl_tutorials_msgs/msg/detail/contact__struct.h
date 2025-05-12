// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rosidl_tutorials_msgs:msg/Contact.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rosidl_tutorials_msgs/msg/contact.h"


#ifndef ROSIDL_TUTORIALS_MSGS__MSG__DETAIL__CONTACT__STRUCT_H_
#define ROSIDL_TUTORIALS_MSGS__MSG__DETAIL__CONTACT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'PHONE_TYPE_HOME'.
enum
{
  rosidl_tutorials_msgs__msg__Contact__PHONE_TYPE_HOME = 0
};

/// Constant 'PHONE_TYPE_WORK'.
enum
{
  rosidl_tutorials_msgs__msg__Contact__PHONE_TYPE_WORK = 1
};

/// Constant 'PHONE_TYPE_MOBILE'.
enum
{
  rosidl_tutorials_msgs__msg__Contact__PHONE_TYPE_MOBILE = 2
};

// Include directives for member types
// Member 'first_name'
// Member 'last_name'
// Member 'phone_number'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Contact in the package rosidl_tutorials_msgs.
typedef struct rosidl_tutorials_msgs__msg__Contact
{
  rosidl_runtime_c__String first_name;
  rosidl_runtime_c__String last_name;
  rosidl_runtime_c__String phone_number;
  uint8_t phone_type;
} rosidl_tutorials_msgs__msg__Contact;

// Struct for a sequence of rosidl_tutorials_msgs__msg__Contact.
typedef struct rosidl_tutorials_msgs__msg__Contact__Sequence
{
  rosidl_tutorials_msgs__msg__Contact * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosidl_tutorials_msgs__msg__Contact__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROSIDL_TUTORIALS_MSGS__MSG__DETAIL__CONTACT__STRUCT_H_
