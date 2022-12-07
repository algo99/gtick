# Include this script prior to any project or enable_language command.
#
# The default GCC compiler options depending of build type are:
#   * Debug:          -g
#   * Release:        -NDEBUG -O2
#   * RelWithDebInfo: -g -NDEBUG -O2
#

set(default_build_type "Release")

# Set a default build type if none was specified.
if(NOT CMAKE_BUILD_TYPE)
  message(STATUS "Setting build type to '${default_build_type}' as none was specified.")
  set(CMAKE_BUILD_TYPE "${default_build_type}" CACHE STRING
    "Choose the type of build, options are: Debug Release RelWithDebInfo."
    FORCE)

  # Set the possible values of build type for cmake-gui
  set_property(CACHE CMAKE_BUILD_TYPE PROPERTY STRINGS
    "Debug" "Release" "RelWithDebInfo")
endif()

message(STATUS "==> Build type: ${CMAKE_BUILD_TYPE}")
