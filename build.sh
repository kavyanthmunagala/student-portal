#!/bin/bash
set -e

g++ -std=c++17 main.cpp StudentManager.cpp StudentSearch.cpp AttendanceValidator.cpp Login.cpp Profile.cpp Dashboard.cpp Settings.cpp -o student-portal

echo "Build successful."
