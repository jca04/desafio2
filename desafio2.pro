TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        database/database.cpp \
        main.cpp \
        sqlite/sqlite3.c

HEADERS += \
    database/database.h \
    sqlite/error_codes.h \
    sqlite/errors.h \
    sqlite/function_traits.h \
    sqlite/sqlite3.h \
    sqlite/sqlite_modern_cpp.h \
    sqlite/type_wrapper.h \
    sqlite/uncaught_exceptions.h \
    sqlite/utf16_utf8.h
