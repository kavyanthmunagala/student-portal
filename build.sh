#!/bin/bash
set -e

CXX=${CXX:-g++}

rm -f student-portal

$CXX -std=c++17 \
    main.cpp \
    StudentManager.cpp \
    StudentSearch.cpp \
    AttendanceValidator.cpp \
    Login.cpp \
    Profile.cpp \
    Dashboard.cpp \
    Settings.cpp \
    -o student-portal

echo "Build successful."
