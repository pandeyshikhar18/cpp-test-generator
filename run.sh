#!/bin/bash

mkdir -p build
cd build
cmake ..
make | tee ../build_logs/build.log
./run_tests
lcov --capture --directory . --output-file ../coverage.info
cd ..
genhtml coverage.info --output-directory out
