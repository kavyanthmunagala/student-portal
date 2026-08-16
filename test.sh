#!/bin/bash
set -e

./build.sh

OUTPUT=$(./student-portal)

echo "$OUTPUT" | grep -q "Welcome to Student Portal"
echo "$OUTPUT" | grep -q "Ananya"
echo "$OUTPUT" | grep -q "Rahul"

echo "All tests passed."
