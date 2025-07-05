cmake_minimum_required(VERSION 3.10)
project(MathUtilsTest)

include_directories(include)
add_executable(run_tests
    src/math_utils.cpp
    tests/math_utils_test.cpp
)

find_package(GTest REQUIRED)
target_link_libraries(run_tests GTest::GTest pthread)
