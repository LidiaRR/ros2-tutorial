// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rosidl_tutorials_msgs:msg/Contact.idl
// generated code does not contain a copyright notice

#include "rosidl_tutorials_msgs/msg/detail/contact__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rosidl_tutorials_msgs
const rosidl_type_hash_t *
rosidl_tutorials_msgs__msg__Contact__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xcd, 0xb5, 0xe0, 0xa1, 0xe4, 0xe0, 0xfe, 0x4e,
      0xf9, 0x9e, 0x60, 0xb0, 0x3f, 0x2c, 0x05, 0x41,
      0xfd, 0xff, 0xc8, 0x69, 0x2a, 0x26, 0x6a, 0x77,
      0xa2, 0xcc, 0x99, 0xfc, 0x5c, 0xb2, 0xe6, 0x23,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rosidl_tutorials_msgs__msg__Contact__TYPE_NAME[] = "rosidl_tutorials_msgs/msg/Contact";

// Define type names, field names, and default values
static char rosidl_tutorials_msgs__msg__Contact__FIELD_NAME__first_name[] = "first_name";
static char rosidl_tutorials_msgs__msg__Contact__FIELD_NAME__last_name[] = "last_name";
static char rosidl_tutorials_msgs__msg__Contact__FIELD_NAME__phone_number[] = "phone_number";
static char rosidl_tutorials_msgs__msg__Contact__FIELD_NAME__phone_type[] = "phone_type";

static rosidl_runtime_c__type_description__Field rosidl_tutorials_msgs__msg__Contact__FIELDS[] = {
  {
    {rosidl_tutorials_msgs__msg__Contact__FIELD_NAME__first_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rosidl_tutorials_msgs__msg__Contact__FIELD_NAME__last_name, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rosidl_tutorials_msgs__msg__Contact__FIELD_NAME__phone_number, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rosidl_tutorials_msgs__msg__Contact__FIELD_NAME__phone_type, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rosidl_tutorials_msgs__msg__Contact__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rosidl_tutorials_msgs__msg__Contact__TYPE_NAME, 33, 33},
      {rosidl_tutorials_msgs__msg__Contact__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 PHONE_TYPE_HOME=0\n"
  "uint8 PHONE_TYPE_WORK=1\n"
  "uint8 PHONE_TYPE_MOBILE=2\n"
  "\n"
  "string first_name\n"
  "string last_name\n"
  "string phone_number\n"
  "uint8 phone_type";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rosidl_tutorials_msgs__msg__Contact__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rosidl_tutorials_msgs__msg__Contact__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 146, 146},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rosidl_tutorials_msgs__msg__Contact__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rosidl_tutorials_msgs__msg__Contact__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
