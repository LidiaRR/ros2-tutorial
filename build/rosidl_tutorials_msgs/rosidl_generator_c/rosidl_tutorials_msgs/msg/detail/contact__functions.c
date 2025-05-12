// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rosidl_tutorials_msgs:msg/Contact.idl
// generated code does not contain a copyright notice
#include "rosidl_tutorials_msgs/msg/detail/contact__functions.h"

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
rosidl_tutorials_msgs__msg__Contact__init(rosidl_tutorials_msgs__msg__Contact * msg)
{
  if (!msg) {
    return false;
  }
  // first_name
  if (!rosidl_runtime_c__String__init(&msg->first_name)) {
    rosidl_tutorials_msgs__msg__Contact__fini(msg);
    return false;
  }
  // last_name
  if (!rosidl_runtime_c__String__init(&msg->last_name)) {
    rosidl_tutorials_msgs__msg__Contact__fini(msg);
    return false;
  }
  // phone_number
  if (!rosidl_runtime_c__String__init(&msg->phone_number)) {
    rosidl_tutorials_msgs__msg__Contact__fini(msg);
    return false;
  }
  // phone_type
  return true;
}

void
rosidl_tutorials_msgs__msg__Contact__fini(rosidl_tutorials_msgs__msg__Contact * msg)
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
rosidl_tutorials_msgs__msg__Contact__are_equal(const rosidl_tutorials_msgs__msg__Contact * lhs, const rosidl_tutorials_msgs__msg__Contact * rhs)
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
rosidl_tutorials_msgs__msg__Contact__copy(
  const rosidl_tutorials_msgs__msg__Contact * input,
  rosidl_tutorials_msgs__msg__Contact * output)
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

rosidl_tutorials_msgs__msg__Contact *
rosidl_tutorials_msgs__msg__Contact__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosidl_tutorials_msgs__msg__Contact * msg = (rosidl_tutorials_msgs__msg__Contact *)allocator.allocate(sizeof(rosidl_tutorials_msgs__msg__Contact), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rosidl_tutorials_msgs__msg__Contact));
  bool success = rosidl_tutorials_msgs__msg__Contact__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rosidl_tutorials_msgs__msg__Contact__destroy(rosidl_tutorials_msgs__msg__Contact * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rosidl_tutorials_msgs__msg__Contact__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rosidl_tutorials_msgs__msg__Contact__Sequence__init(rosidl_tutorials_msgs__msg__Contact__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosidl_tutorials_msgs__msg__Contact * data = NULL;

  if (size) {
    data = (rosidl_tutorials_msgs__msg__Contact *)allocator.zero_allocate(size, sizeof(rosidl_tutorials_msgs__msg__Contact), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rosidl_tutorials_msgs__msg__Contact__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rosidl_tutorials_msgs__msg__Contact__fini(&data[i - 1]);
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
rosidl_tutorials_msgs__msg__Contact__Sequence__fini(rosidl_tutorials_msgs__msg__Contact__Sequence * array)
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
      rosidl_tutorials_msgs__msg__Contact__fini(&array->data[i]);
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

rosidl_tutorials_msgs__msg__Contact__Sequence *
rosidl_tutorials_msgs__msg__Contact__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosidl_tutorials_msgs__msg__Contact__Sequence * array = (rosidl_tutorials_msgs__msg__Contact__Sequence *)allocator.allocate(sizeof(rosidl_tutorials_msgs__msg__Contact__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rosidl_tutorials_msgs__msg__Contact__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rosidl_tutorials_msgs__msg__Contact__Sequence__destroy(rosidl_tutorials_msgs__msg__Contact__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rosidl_tutorials_msgs__msg__Contact__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rosidl_tutorials_msgs__msg__Contact__Sequence__are_equal(const rosidl_tutorials_msgs__msg__Contact__Sequence * lhs, const rosidl_tutorials_msgs__msg__Contact__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rosidl_tutorials_msgs__msg__Contact__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rosidl_tutorials_msgs__msg__Contact__Sequence__copy(
  const rosidl_tutorials_msgs__msg__Contact__Sequence * input,
  rosidl_tutorials_msgs__msg__Contact__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rosidl_tutorials_msgs__msg__Contact);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rosidl_tutorials_msgs__msg__Contact * data =
      (rosidl_tutorials_msgs__msg__Contact *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rosidl_tutorials_msgs__msg__Contact__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rosidl_tutorials_msgs__msg__Contact__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rosidl_tutorials_msgs__msg__Contact__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
