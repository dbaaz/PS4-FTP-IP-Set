# This file is generated automatically. Do not edit.
# Use project properties -> Build -> Qt -> Expert -> Custom Definitions.
TEMPLATE = app
DESTDIR = dist/Release/MinGW_1-Windows
TARGET = FTPIPSet
VERSION = 1.0.0
CONFIG -= debug_and_release app_bundle lib_bundle
CONFIG += release 
PKGCONFIG +=
QT = core gui widgets
SOURCES += SetData.cpp WindowMain.cpp main.cpp
HEADERS += SetData.h WindowMain.h
FORMS += WindowMain.ui
RESOURCES +=
TRANSLATIONS +=
OBJECTS_DIR = build/Release/MinGW_1-Windows
MOC_DIR = 
RCC_DIR = 
UI_DIR = 
QMAKE_CC = gcc
QMAKE_CXX = g++
DEFINES += 
INCLUDEPATH += 
LIBS += -static-libgcc -static-libstdc++  
