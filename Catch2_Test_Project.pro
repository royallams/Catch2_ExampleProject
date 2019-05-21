QT       -= gui

TARGET = consoleapp
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += \
    main.cpp \
    test_group1.cpp \
    test_group2.cpp \
    test_sections.cpp \
    test_scenerios_when_then.cpp

HEADERS  += catch.hpp
