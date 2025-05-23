#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "more_interfaces::more_interfaces__rosidl_generator_py" for configuration ""
set_property(TARGET more_interfaces::more_interfaces__rosidl_generator_py APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(more_interfaces::more_interfaces__rosidl_generator_py PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_NOCONFIG "more_interfaces::more_interfaces__rosidl_generator_c;Python3::Python;more_interfaces::more_interfaces__rosidl_typesupport_c;rosidl_tutorials_msgs::rosidl_tutorials_msgs__rosidl_generator_c;rosidl_tutorials_msgs::rosidl_tutorials_msgs__rosidl_typesupport_fastrtps_c;rosidl_tutorials_msgs::rosidl_tutorials_msgs__rosidl_typesupport_introspection_c;rosidl_tutorials_msgs::rosidl_tutorials_msgs__rosidl_typesupport_c;rosidl_tutorials_msgs::rosidl_tutorials_msgs__rosidl_typesupport_fastrtps_cpp;rosidl_tutorials_msgs::rosidl_tutorials_msgs__rosidl_typesupport_introspection_cpp;rosidl_tutorials_msgs::rosidl_tutorials_msgs__rosidl_typesupport_cpp;rosidl_tutorials_msgs::rosidl_tutorials_msgs__rosidl_generator_py"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libmore_interfaces__rosidl_generator_py.so"
  IMPORTED_SONAME_NOCONFIG "libmore_interfaces__rosidl_generator_py.so"
  )

list(APPEND _cmake_import_check_targets more_interfaces::more_interfaces__rosidl_generator_py )
list(APPEND _cmake_import_check_files_for_more_interfaces::more_interfaces__rosidl_generator_py "${_IMPORT_PREFIX}/lib/libmore_interfaces__rosidl_generator_py.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
