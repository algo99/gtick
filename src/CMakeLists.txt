project(gtick)

if(USE_LIBSNDFILE)
    pkg_check_modules(SNDFILE REQUIRED sndfile)
    if(SNDFILE_FOUND)
        add_compile_definitions(WITH_SNDFILE=1)
    endif()
endif()

find_library(PULSE pulse REQUIRED)
find_library(PULSESIMPLE pulse-simple REQUIRED)
list(APPEND PULSE_LIBRARIES ${PULSE} ${PULSESIMPLE})


execute_process(COMMAND ${CMAKE_COMMAND} -E copy_directory
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_BINARY_DIR}
)
execute_process(COMMAND ${CMAKE_COMMAND} -E remove -f
    ${CMAKE_CURRENT_BINARY_DIR}/optionlexer.l
    ${CMAKE_CURRENT_BINARY_DIR}/optionparser.y
)

set(SOURCES
    ${CMAKE_CURRENT_BINARY_DIR}/dsp.c
    ${CMAKE_CURRENT_BINARY_DIR}/g711.c
    ${CMAKE_CURRENT_BINARY_DIR}/gtick.c
    ${CMAKE_CURRENT_BINARY_DIR}/gtkoptions.c
    ${CMAKE_CURRENT_BINARY_DIR}/gtkutil.c
    ${CMAKE_CURRENT_BINARY_DIR}/help.c
    ${CMAKE_CURRENT_BINARY_DIR}/metro.c
    ${CMAKE_CURRENT_BINARY_DIR}/option.c
    ${CMAKE_CURRENT_BINARY_DIR}/options.c
    ${CMAKE_CURRENT_BINARY_DIR}/profiles.c
    ${CMAKE_CURRENT_BINARY_DIR}/threadtalk.c
    ${CMAKE_CURRENT_BINARY_DIR}/tickdata.c
    ${CMAKE_CURRENT_BINARY_DIR}/util.c
    ${CMAKE_CURRENT_BINARY_DIR}/visualtick.c
)


find_package(BISON)
find_package(FLEX)

BISON_TARGET(MyParser optionparser.y ${CMAKE_CURRENT_BINARY_DIR}/optionparser.c
    DEFINES_FILE ${CMAKE_CURRENT_BINARY_DIR}/optionparser.h)
FLEX_TARGET(MyScanner optionlexer.l ${CMAKE_CURRENT_BINARY_DIR}/optionlexer.c)
ADD_FLEX_BISON_DEPENDENCY(MyScanner MyParser)


add_executable(${PROJECT_NAME}
    ${SOURCES}
    ${BISON_MyParser_OUTPUTS}
    ${FLEX_MyScanner_OUTPUTS}
)

target_include_directories(${PROJECT_NAME} SYSTEM PRIVATE
    ${GTK_INCLUDE_DIRS}
)

target_link_libraries(${PROJECT_NAME} PRIVATE
    ${GTK_LIBRARIES}
    ${PULSE_LIBRARIES}
    ${SNDFILE_LIBRARIES}
    m
)


install(TARGETS ${PROJECT_NAME}
    RUNTIME DESTINATION "${GTICK_BINARY_INSTALL_DIR}")

#message("BISON: ${BISON_MyParser_OUTPUTS}")
#message("FLEX: ${FLEX_MyScanner_OUTPUTS}")
#message("GTK_LIBRARIES: ${GTK_LIBRARIES}")
#message("GTK_CFLAGS_OTHER: ${GTK_CFLAGS_OTHER}")
#message("GTK_LIBRARY_DIRS: ${GTK_LIBRARY_DIRS}")
