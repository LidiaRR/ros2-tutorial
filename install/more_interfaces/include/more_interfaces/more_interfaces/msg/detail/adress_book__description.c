// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from more_interfaces:msg/AdressBook.idl
// generated code does not contain a copyright notice

#include "more_interfaces/msg/detail/adress_book__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_more_interfaces
const rosidl_type_hash_t *
more_interfaces__msg__AdressBook__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc3, 0x76, 0x11, 0xce, 0xb1, 0x5a, 0x97, 0x76,
      0x42, 0x20, 0xca, 0x2e, 0xab, 0x6c, 0x99, 0x73,
      0xac, 0xb8, 0x10, 0xa0, 0x49, 0x7c, 0x4b, 0xcd,
      0xb3, 0xdb, 0xf6, 0xe1, 0xa5, 0x26, 0xeb, 0xc1,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char more_interfaces__msg__AdressBook__TYPE_NAME[] = "more_interfaces/msg/AdressBook";

// Define type names, field names, and default values
static char more_interfaces__msg__AdressBook__FIELD_NAME__first_name[] = "first_name";
static char more_interfaces__msg__AdressBook__FIELD_NAME__last_name[] = "last_name";
static char more_interfaces__msg__AdressBook__FIELD_NAME__phone_number[] = "phone_number";
static char more_interfaces__msg__AdressBook__FIELD_NAME__phone_type[] = "phone_type";

static rosidl_runtime_c__type_description__Field more_interfaces__msg__AdressBook__FIELDS[] = {
  {
    {more_interfaces__msg__AdressBook__FIELD_NAME__first_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {more_interfaces__msg__AdressBook__FIELD_NAME__last_name, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {more_interfaces__msg__AdressBook__FIELD_NAME__phone_number, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {more_interfaces__msg__AdressBook__FIELD_NAME__phone_type, 10, 10},
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
more_interfaces__msg__AdressBook__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {more_interfaces__msg__AdressBook__TYPE_NAME, 30, 30},
      {more_interfaces__msg__AdressBook__FIELDS, 4, 4},
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
more_interfaces__msg__AdressBook__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {more_interfaces__msg__AdressBook__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 146, 146},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
more_interfaces__msg__AdressBook__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *more_interfaces__msg__AdressBook__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
