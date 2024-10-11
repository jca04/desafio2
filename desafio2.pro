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
    sqlite/sqlite3.h
