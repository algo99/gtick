cmake_minimum_required(VERSION 3.12)

include(cmake/build_type.cmake)

project(GTICK_ROOT)

if(NOT ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU" OR
        "${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang"))
    message(FATAL_ERROR "Currently only [GNU, Clang] toolchains are supported !")
endif()


find_package(PkgConfig REQUIRED)
pkg_check_modules(GTK REQUIRED gtk+-2.0)

option(USE_LIBSNDFILE "Use libsndfile" ON)

set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_STANDARD 11)

# Installation related variables.
#set(GTICK_BINARY_INSTALL_DIR "${CMAKE_INSTALL_PREFIX}/bin" CACHE
#    PATH "Destination directory for installation of the executable")
set(GTICK_BINARY_INSTALL_DIR "/tmp/my/bin" CACHE
    PATH "Destination directory for installation of the executable")

add_subdirectory(src)
#add_subdirectory(testsuite)
# add_subdirectory(doc)
# add_subdirectory(po)
# add_subdirectory(intl)
