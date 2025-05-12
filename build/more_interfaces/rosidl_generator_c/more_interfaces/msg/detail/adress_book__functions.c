// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from more_interfaces:msg/AdressBook.idl
// generated code does not contain a copyright notice
#include "more_interfaces/msg/detail/adress_book__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `first_name`
// Member `last_name`
// Member `phone_number`
#include "rosidl_runtime_c/string_functions.h"

bool
more_interfaces__msg__AdressBook__init(more_interfaces__msg__AdressBook * msg)
{
  if (!msg) {
    return false;
  }
  // first_name
  if (!rosidl_runtime_c__String__init(&msg->first_name)) {
    more_interfaces__msg__AdressBook__fini(msg);
    return false;
  }
  // last_name
  if (!rosidl_runtime_c__String__init(&msg->last_name)) {
    more_interfaces__msg__AdressBook__fini(msg);
    return false;
  }
  // phone_number
  if (!rosidl_runtime_c__String__init(&msg->phone_number)) {
    more_interfaces__msg__AdressBook__fini(msg);
    return false;
  }
  // phone_type
  return true;
}

void
more_interfaces__msg__AdressBook__fini(more_interfaces__msg__AdressBook * msg)
{
  if (!msg) {
    return;
  }
  // first_name
  rosidl_runtime_c__String__fini(&msg->first_name);
  // last_name
  rosidl_runtime_c__String__fini(&msg->last_name);
  // phone_number
  rosidl_runtime_c__String__fini(&msg->phone_number);
  // phone_type
}

bool
more_interfaces__msg__AdressBook__are_equal(const more_interfaces__msg__AdressBook * lhs, const more_interfaces__msg__AdressBook * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // first_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->first_name), &(rhs->first_name)))
  {
    return false;
  }
  // last_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->last_name), &(rhs->last_name)))
  {
    return false;
  }
  // phone_number
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->phone_number), &(rhs->phone_number)))
  {
    return false;
  }
  // phone_type
  if (lhs->phone_type != rhs->phone_type) {
    return false;
  }
  return true;
}

bool
more_interfaces__msg__AdressBook__copy(
  const more_interfaces__msg__AdressBook * input,
  more_interfaces__msg__AdressBook * output)
{
  if (!input || !output) {
    return false;
  }
  // first_name
  if (!rosidl_runtime_c__String__copy(
      &(input->first_name), &(output->first_name)))
  {
    return false;
  }
  // last_name
  if (!rosidl_runtime_c__String__copy(
      &(input->last_name), &(output->last_name)))
  {
    return false;
  }
  // phone_number
  if (!rosidl_runtime_c__String__copy(
      &(input->phone_number), &(output->phone_number)))
  {
    return false;
  }
  // phone_type
  output->phone_type = input->phone_type;
  return true;
}

more_interfaces__msg__AdressBook *
more_interfaces__msg__AdressBook__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  more_interfaces__msg__AdressBook * msg = (more_interfaces__msg__AdressBook *)allocator.allocate(sizeof(more_interfaces__msg__AdressBook), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(more_interfaces__msg__AdressBook));
  bool success = more_interfaces__msg__AdressBook__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
more_interfaces__msg__AdressBook__destroy(more_interfaces__msg__AdressBook * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    more_interfaces__msg__AdressBook__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
more_interfaces__msg__AdressBook__Sequence__init(more_interfaces__msg__AdressBook__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  more_interfaces__msg__AdressBook * data = NULL;

  if (size) {
    data = (more_interfaces__msg__AdressBook *)allocator.zero_allocate(size, sizeof(more_interfaces__msg__AdressBook), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = more_interfaces__msg__AdressBook__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        more_interfaces__msg__AdressBook__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
more_interfaces__msg__AdressBook__Sequence__fini(more_interfaces__msg__AdressBook__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      more_interfaces__msg__AdressBook__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

more_interfaces__msg__AdressBook__Sequence *
more_interfaces__msg__AdressBook__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  more_interfaces__msg__AdressBook__Sequence * array = (more_interfaces__msg__AdressBook__Sequence *)allocator.allocate(sizeof(more_interfaces__msg__AdressBook__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = more_interfaces__msg__AdressBook__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
more_interfaces__msg__AdressBook__Sequence__destroy(more_interfaces__msg__AdressBook__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    more_interfaces__msg__AdressBook__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
more_interfaces__msg__AdressBook__Sequence__are_equal(const more_interfaces__msg__AdressBook__Sequence * lhs, const more_interfaces__msg__AdressBook__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!more_interfaces__msg__AdressBook__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
more_interfaces__msg__AdressBook__Sequence__copy(
  const more_interfaces__msg__AdressBook__Sequence * input,
  more_interfaces__msg__AdressBook__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(more_interfaces__msg__AdressBook);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    more_interfaces__msg__AdressBook * data =
      (more_interfaces__msg__AdressBook *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!more_interfaces__msg__AdressBook__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          more_interfaces__msg__AdressBook__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!more_interfaces__msg__AdressBook__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
