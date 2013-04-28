project(helloTesting)
cmake_minimum_required(VERSION 2.8.10.2)

################################################################################
# GTest - http://code.google.com/p/googletest/
################################################################################
add_subdirectory(gtest)
enable_testing(true)
include_directories(src ${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

################################################################################
# Hello
################################################################################
add_executable(unit-tests src/unit-tests.cpp)
target_link_libraries(unit-tests gtest gtest_main)
add_test(unit-tests unit-tests)

