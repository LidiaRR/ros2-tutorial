// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rosidl_tutorials_msgs:msg/Contact.idl
// generated code does not contain a copyright notice
#include "rosidl_tutorials_msgs/msg/detail/contact__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_tutorials_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rosidl_tutorials_msgs/msg/detail/contact__struct.h"
#include "rosidl_tutorials_msgs/msg/detail/contact__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // first_name, last_name, phone_number
#include "rosidl_runtime_c/string_functions.h"  // first_name, last_name, phone_number

// forward declare type support functions


using _Contact__ros_msg_type = rosidl_tutorials_msgs__msg__Contact;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosidl_tutorials_msgs
bool cdr_serialize_rosidl_tutorials_msgs__msg__Contact(
  const rosidl_tutorials_msgs__msg__Contact * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: first_name
  {
    const rosidl_runtime_c__String * str = &ros_message->first_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: last_name
  {
    const rosidl_runtime_c__String * str = &ros_message->last_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: phone_number
  {
    const rosidl_runtime_c__String * str = &ros_message->phone_number;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: phone_type
  {
    cdr << ros_message->phone_type;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosidl_tutorials_msgs
bool cdr_deserialize_rosidl_tutorials_msgs__msg__Contact(
  eprosima::fastcdr::Cdr & cdr,
  rosidl_tutorials_msgs__msg__Contact * ros_message)
{
  // Field name: first_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->first_name.data) {
      rosidl_runtime_c__String__init(&ros_message->first_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->first_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'first_name'\n");
      return false;
    }
  }

  // Field name: last_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->last_name.data) {
      rosidl_runtime_c__String__init(&ros_message->last_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->last_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'last_name'\n");
      return false;
    }
  }

  // Field name: phone_number
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->phone_number.data) {
      rosidl_runtime_c__String__init(&ros_message->phone_number);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->phone_number,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'phone_number'\n");
      return false;
    }
  }

  // Field name: phone_type
  {
    cdr >> ros_message->phone_type;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosidl_tutorials_msgs
size_t get_serialized_size_rosidl_tutorials_msgs__msg__Contact(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Contact__ros_msg_type * ros_message = static_cast<const _Contact__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: first_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->first_name.size + 1);

  // Field name: last_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->last_name.size + 1);

  // Field name: phone_number
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->phone_number.size + 1);

  // Field name: phone_type
  {
    size_t item_size = sizeof(ros_message->phone_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosidl_tutorials_msgs
size_t max_serialized_size_rosidl_tutorials_msgs__msg__Contact(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: first_name
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: last_name
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: phone_number
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: phone_type
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = rosidl_tutorials_msgs__msg__Contact;
    is_plain =
      (
      offsetof(DataType, phone_type) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosidl_tutorials_msgs
bool cdr_serialize_key_rosidl_tutorials_msgs__msg__Contact(
  const rosidl_tutorials_msgs__msg__Contact * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: first_name
  {
    const rosidl_runtime_c__String * str = &ros_message->first_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: last_name
  {
    const rosidl_runtime_c__String * str = &ros_message->last_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: phone_number
  {
    const rosidl_runtime_c__String * str = &ros_message->phone_number;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: phone_type
  {
    cdr << ros_message->phone_type;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosidl_tutorials_msgs
size_t get_serialized_size_key_rosidl_tutorials_msgs__msg__Contact(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Contact__ros_msg_type * ros_message = static_cast<const _Contact__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: first_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->first_name.size + 1);

  // Field name: last_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->last_name.size + 1);

  // Field name: phone_number
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->phone_number.size + 1);

  // Field name: phone_type
  {
    size_t item_size = sizeof(ros_message->phone_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosidl_tutorials_msgs
size_t max_serialized_size_key_rosidl_tutorials_msgs__msg__Contact(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: first_name
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: last_name
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: phone_number
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: phone_type
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = rosidl_tutorials_msgs__msg__Contact;
    is_plain =
      (
      offsetof(DataType, phone_type) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _Contact__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const rosidl_tutorials_msgs__msg__Contact * ros_message = static_cast<const rosidl_tutorials_msgs__msg__Contact *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_rosidl_tutorials_msgs__msg__Contact(ros_message, cdr);
}

static bool _Contact__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  rosidl_tutorials_msgs__msg__Contact * ros_message = static_cast<rosidl_tutorials_msgs__msg__Contact *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_rosidl_tutorials_msgs__msg__Contact(cdr, ros_message);
}

static uint32_t _Contact__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rosidl_tutorials_msgs__msg__Contact(
      untyped_ros_message, 0));
}

static size_t _Contact__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rosidl_tutorials_msgs__msg__Contact(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Contact = {
  "rosidl_tutorials_msgs::msg",
  "Contact",
  _Contact__cdr_serialize,
  _Contact__cdr_deserialize,
  _Contact__get_serialized_size,
  _Contact__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _Contact__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Contact,
  get_message_typesupport_handle_function,
  &rosidl_tutorials_msgs__msg__Contact__get_type_hash,
  &rosidl_tutorials_msgs__msg__Contact__get_type_description,
  &rosidl_tutorials_msgs__msg__Contact__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rosidl_tutorials_msgs, msg, Contact)() {
  return &_Contact__type_support;
}

#if defined(__cplusplus)
}
#endif
