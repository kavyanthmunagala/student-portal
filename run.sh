#!/bin/bash
set -e

if [ ! -f "./student-portal" ]; then
    ./build.sh
fi

./student-portal
