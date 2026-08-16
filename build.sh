#!/bin/bash
set -e

CXX=${CXX:-g++}

build() {
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

    echo "Build successful: student-portal is ready."
}

clean() {
    rm -f student-portal
    echo "Clean successful."
}

case "${1:-build}" in
    build)
        build
        ;;
    clean)
        clean
        ;;
    *)
        echo "Usage: ./build.sh [build|clean]"
        exit 1
        ;;
esac
