cmake_minimum_required(VERSION 2.8)
set (project intl)

set(${project}_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/dcigettext.c
    ${CMAKE_CURRENT_SOURCE_DIR}/xsize.c
    ${CMAKE_CURRENT_SOURCE_DIR}/dcngettext.c
    ${CMAKE_CURRENT_SOURCE_DIR}/localealias.c
    ${CMAKE_CURRENT_SOURCE_DIR}/printf.c
    ${CMAKE_CURRENT_SOURCE_DIR}/textdomain.c
    ${CMAKE_CURRENT_SOURCE_DIR}/l10nflist.c
    ${CMAKE_CURRENT_SOURCE_DIR}/dcgettext.c
    ${CMAKE_CURRENT_SOURCE_DIR}/setlocale.c
    ${CMAKE_CURRENT_SOURCE_DIR}/explodename.c
    ${CMAKE_CURRENT_SOURCE_DIR}/printf-args.c
    ${CMAKE_CURRENT_SOURCE_DIR}/localename.c
    ${CMAKE_CURRENT_SOURCE_DIR}/bindtextdom.c
    ${CMAKE_CURRENT_SOURCE_DIR}/intl-compat.c
    ${CMAKE_CURRENT_SOURCE_DIR}/printf-parse.c
    ${CMAKE_CURRENT_SOURCE_DIR}/vasnprintf.c
    ${CMAKE_CURRENT_SOURCE_DIR}/dgettext.c
    ${CMAKE_CURRENT_SOURCE_DIR}/intl-exports.c
    ${CMAKE_CURRENT_SOURCE_DIR}/localcharset.c
    ${CMAKE_CURRENT_SOURCE_DIR}/osdep.c
    ${CMAKE_CURRENT_SOURCE_DIR}/loadmsgcat.c
    ${CMAKE_CURRENT_SOURCE_DIR}/threadlib.c
    ${CMAKE_CURRENT_SOURCE_DIR}/os2compat.c
    ${CMAKE_CURRENT_SOURCE_DIR}/finddomain.c
    ${CMAKE_CURRENT_SOURCE_DIR}/dngettext.c
    ${CMAKE_CURRENT_SOURCE_DIR}/langprefs.c
    ${CMAKE_CURRENT_SOURCE_DIR}/log.c
    ${CMAKE_CURRENT_SOURCE_DIR}/tsearch.c
    ${CMAKE_CURRENT_SOURCE_DIR}/gettext.c
    ${CMAKE_CURRENT_SOURCE_DIR}/relocatable.c
    ${CMAKE_CURRENT_SOURCE_DIR}/hash-string.c
    ${CMAKE_CURRENT_SOURCE_DIR}/plural.c
    ${CMAKE_CURRENT_SOURCE_DIR}/version.c
    ${CMAKE_CURRENT_SOURCE_DIR}/plural-exp.c
    ${CMAKE_CURRENT_SOURCE_DIR}/lock.c
    ${CMAKE_CURRENT_SOURCE_DIR}/ngettext.c
)

set(${project}_HEADERS
    ${CMAKE_CURRENT_SOURCE_DIR}/gmo.h
    ${CMAKE_CURRENT_SOURCE_DIR}/localcharset.h
    ${CMAKE_CURRENT_SOURCE_DIR}/relocatable.h
    ${CMAKE_CURRENT_SOURCE_DIR}/hash-string.h
    ${CMAKE_CURRENT_SOURCE_DIR}/plural-exp.h
    ${CMAKE_CURRENT_SOURCE_DIR}/eval-plural.h
    ${CMAKE_CURRENT_SOURCE_DIR}/vasnwprintf.h
    ${CMAKE_CURRENT_SOURCE_DIR}/wprintf-parse.h
    ${CMAKE_CURRENT_SOURCE_DIR}/os2compat.h
    ${CMAKE_CURRENT_SOURCE_DIR}/lock.h
    ${CMAKE_CURRENT_SOURCE_DIR}/vasnprintf.h
    ${CMAKE_CURRENT_SOURCE_DIR}/loadinfo.h
    ${CMAKE_CURRENT_SOURCE_DIR}/tsearch.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gettextP.h
    ${CMAKE_CURRENT_SOURCE_DIR}/libgnuintl.in.h
    ${CMAKE_CURRENT_SOURCE_DIR}/export.h
    ${CMAKE_CURRENT_SOURCE_DIR}/verify.h
    ${CMAKE_CURRENT_SOURCE_DIR}/printf-args.h
    ${CMAKE_CURRENT_SOURCE_DIR}/printf-parse.h
    ${CMAKE_CURRENT_SOURCE_DIR}/xsize.h
)

add_library(${project} STATIC ${${project}_SOURCES} ${${project}_HEADERS} )
