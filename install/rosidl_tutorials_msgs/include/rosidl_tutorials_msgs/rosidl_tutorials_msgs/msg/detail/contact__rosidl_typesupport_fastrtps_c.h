// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from rosidl_tutorials_msgs:msg/Contact.idl
// generated code does not contain a copyright notice
#ifndef ROSIDL_TUTORIALS_MSGS__MSG__DETAIL__CONTACT__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define ROSIDL_TUTORIALS_MSGS__MSG__DETAIL__CONTACT__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "rosidl_tutorials_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rosidl_tutorials_msgs/msg/detail/contact__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosidl_tutorials_msgs
bool cdr_serialize_rosidl_tutorials_msgs__msg__Contact(
  const rosidl_tutorials_msgs__msg__Contact * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosidl_tutorials_msgs
bool cdr_deserialize_rosidl_tutorials_msgs__msg__Contact(
  eprosima::fastcdr::Cdr &,
  rosidl_tutorials_msgs__msg__Contact * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosidl_tutorials_msgs
size_t get_serialized_size_rosidl_tutorials_msgs__msg__Contact(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosidl_tutorials_msgs
size_t max_serialized_size_rosidl_tutorials_msgs__msg__Contact(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosidl_tutorials_msgs
bool cdr_serialize_key_rosidl_tutorials_msgs__msg__Contact(
  const rosidl_tutorials_msgs__msg__Contact * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosidl_tutorials_msgs
size_t get_serialized_size_key_rosidl_tutorials_msgs__msg__Contact(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosidl_tutorials_msgs
size_t max_serialized_size_key_rosidl_tutorials_msgs__msg__Contact(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosidl_tutorials_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rosidl_tutorials_msgs, msg, Contact)();

#ifdef __cplusplus
}
#endif

#endif  // ROSIDL_TUTORIALS_MSGS__MSG__DETAIL__CONTACT__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
