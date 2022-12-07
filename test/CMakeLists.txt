cmake_minimum_required(VERSION 2.8)
set (project testsuite)

set(${project}_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/testdsp.c
    ${CMAKE_CURRENT_SOURCE_DIR}/testg711.c
    ${CMAKE_CURRENT_SOURCE_DIR}/common.c
    ${CMAKE_CURRENT_SOURCE_DIR}/testmetro-static.c
    ${CMAKE_CURRENT_SOURCE_DIR}/testmetro.c
)

set(${project}_HEADERS
    ${CMAKE_CURRENT_SOURCE_DIR}/common.h
)

add_library(${project} STATIC ${${project}_SOURCES} ${${project}_HEADERS} )
