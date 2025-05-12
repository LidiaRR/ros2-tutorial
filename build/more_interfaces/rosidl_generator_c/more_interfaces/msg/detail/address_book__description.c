// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from more_interfaces:msg/AddressBook.idl
// generated code does not contain a copyright notice

#include "more_interfaces/msg/detail/address_book__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_more_interfaces
const rosidl_type_hash_t *
more_interfaces__msg__AddressBook__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xde, 0x55, 0xc7, 0xdd, 0xc6, 0x28, 0xfd, 0xdc,
      0x90, 0xc5, 0x74, 0x3d, 0x29, 0xfb, 0xcf, 0x30,
      0x1d, 0xe8, 0xb4, 0x7a, 0xec, 0x52, 0xa4, 0x45,
      0xe1, 0x8a, 0xad, 0x6f, 0x72, 0xe4, 0x24, 0x94,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "rosidl_tutorials_msgs/msg/detail/contact__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t rosidl_tutorials_msgs__msg__Contact__EXPECTED_HASH = {1, {
    0xcd, 0xb5, 0xe0, 0xa1, 0xe4, 0xe0, 0xfe, 0x4e,
    0xf9, 0x9e, 0x60, 0xb0, 0x3f, 0x2c, 0x05, 0x41,
    0xfd, 0xff, 0xc8, 0x69, 0x2a, 0x26, 0x6a, 0x77,
    0xa2, 0xcc, 0x99, 0xfc, 0x5c, 0xb2, 0xe6, 0x23,
  }};
#endif

static char more_interfaces__msg__AddressBook__TYPE_NAME[] = "more_interfaces/msg/AddressBook";
static char rosidl_tutorials_msgs__msg__Contact__TYPE_NAME[] = "rosidl_tutorials_msgs/msg/Contact";

// Define type names, field names, and default values
static char more_interfaces__msg__AddressBook__FIELD_NAME__address_book[] = "address_book";

static rosidl_runtime_c__type_description__Field more_interfaces__msg__AddressBook__FIELDS[] = {
  {
    {more_interfaces__msg__AddressBook__FIELD_NAME__address_book, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {rosidl_tutorials_msgs__msg__Contact__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription more_interfaces__msg__AddressBook__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {rosidl_tutorials_msgs__msg__Contact__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
more_interfaces__msg__AddressBook__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {more_interfaces__msg__AddressBook__TYPE_NAME, 31, 31},
      {more_interfaces__msg__AddressBook__FIELDS, 1, 1},
    },
    {more_interfaces__msg__AddressBook__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&rosidl_tutorials_msgs__msg__Contact__EXPECTED_HASH, rosidl_tutorials_msgs__msg__Contact__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = rosidl_tutorials_msgs__msg__Contact__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "rosidl_tutorials_msgs/Contact[] address_book";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
more_interfaces__msg__AddressBook__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {more_interfaces__msg__AddressBook__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 44, 44},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
more_interfaces__msg__AddressBook__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *more_interfaces__msg__AddressBook__get_individual_type_description_source(NULL),
    sources[1] = *rosidl_tutorials_msgs__msg__Contact__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
