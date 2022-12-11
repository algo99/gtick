cmake_minimum_required(VERSION 3.12)

include(cmake/build_type.cmake)

project(GTICK_ROOT)

if(NOT ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU" OR
        "${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang"))
    message(FATAL_ERROR "Currently only [GNU, Clang] toolchains are supported !")
endif()


set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_STANDARD 11)

find_package(PkgConfig REQUIRED)
pkg_check_modules(GTK REQUIRED gtk+-2.0)

option(USE_LIBSNDFILE "Use libsndfile" ON)

include(GNUInstallDirs)

option(USE_NLS "Use NLS" ON)
if(USE_NLS)
    add_compile_definitions(
        ENABLE_NLS=1
        LOCALEDIR="${CMAKE_INSTALL_FULL_LOCALEDIR}"
    )
endif()

# Installation related variables/rules.
set(CMAKE_INSTALL_PREFIX /usr/local CACHE PATH "Install prefix" FORCE)
set(GTICK_INSTALL_BINDIR "${CMAKE_INSTALL_BINDIR}" CACHE PATH
    "Destination directory for installation of the executable")
set(GTICK_INSTALL_DATADIR "${CMAKE_INSTALL_DATADIR}" CACHE PATH
    "Destination directory for installation of program data")

install(FILES data/gtick.appdata.xml
    DESTINATION ${GTICK_INSTALL_DATADIR}/appdata
    PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ)
install(FILES data/gtick.desktop
    DESTINATION ${GTICK_INSTALL_DATADIR}/applications
    PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ)
install(FILES data/gtick.xpm
    DESTINATION ${GTICK_INSTALL_DATADIR}/icons/hicolor/64x64/apps
    PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ)
install(FILES data/gtick_32x32.xpm
    DESTINATION ${GTICK_INSTALL_DATADIR}/pixmaps
    PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ)

add_subdirectory(src)
# add_subdirectory(test)
# add_subdirectory(doc)
# add_subdirectory(po)
