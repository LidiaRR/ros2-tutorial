// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rosidl_tutorials_msgs:msg/Contact.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rosidl_tutorials_msgs/msg/detail/contact__rosidl_typesupport_introspection_c.h"
#include "rosidl_tutorials_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rosidl_tutorials_msgs/msg/detail/contact__functions.h"
#include "rosidl_tutorials_msgs/msg/detail/contact__struct.h"


// Include directives for member types
// Member `first_name`
// Member `last_name`
// Member `phone_number`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rosidl_tutorials_msgs__msg__Contact__rosidl_typesupport_introspection_c__Contact_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rosidl_tutorials_msgs__msg__Contact__init(message_memory);
}

void rosidl_tutorials_msgs__msg__Contact__rosidl_typesupport_introspection_c__Contact_fini_function(void * message_memory)
{
  rosidl_tutorials_msgs__msg__Contact__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rosidl_tutorials_msgs__msg__Contact__rosidl_typesupport_introspection_c__Contact_message_member_array[4] = {
  {
    "first_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosidl_tutorials_msgs__msg__Contact, first_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "last_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosidl_tutorials_msgs__msg__Contact, last_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "phone_number",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosidl_tutorials_msgs__msg__Contact, phone_number),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "phone_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosidl_tutorials_msgs__msg__Contact, phone_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rosidl_tutorials_msgs__msg__Contact__rosidl_typesupport_introspection_c__Contact_message_members = {
  "rosidl_tutorials_msgs__msg",  // message namespace
  "Contact",  // message name
  4,  // number of fields
  sizeof(rosidl_tutorials_msgs__msg__Contact),
  false,  // has_any_key_member_
  rosidl_tutorials_msgs__msg__Contact__rosidl_typesupport_introspection_c__Contact_message_member_array,  // message members
  rosidl_tutorials_msgs__msg__Contact__rosidl_typesupport_introspection_c__Contact_init_function,  // function to initialize message memory (memory has to be allocated)
  rosidl_tutorials_msgs__msg__Contact__rosidl_typesupport_introspection_c__Contact_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rosidl_tutorials_msgs__msg__Contact__rosidl_typesupport_introspection_c__Contact_message_type_support_handle = {
  0,
  &rosidl_tutorials_msgs__msg__Contact__rosidl_typesupport_introspection_c__Contact_message_members,
  get_message_typesupport_handle_function,
  &rosidl_tutorials_msgs__msg__Contact__get_type_hash,
  &rosidl_tutorials_msgs__msg__Contact__get_type_description,
  &rosidl_tutorials_msgs__msg__Contact__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rosidl_tutorials_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosidl_tutorials_msgs, msg, Contact)() {
  if (!rosidl_tutorials_msgs__msg__Contact__rosidl_typesupport_introspection_c__Contact_message_type_support_handle.typesupport_identifier) {
    rosidl_tutorials_msgs__msg__Contact__rosidl_typesupport_introspection_c__Contact_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rosidl_tutorials_msgs__msg__Contact__rosidl_typesupport_introspection_c__Contact_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
