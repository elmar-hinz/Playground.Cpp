project(sample1)
cmake_minimum_required(VERSION 2.8.10.2)

################################################################################
# GTest - http://code.google.com/p/googletest/
################################################################################
add_subdirectory(gtest)
enable_testing(true)

################################################################################
# Hello
################################################################################
include_directories(./include ${gtest_SOURCE_DIR}/include)
cxx_executable(sampleTest tests/unit gtest_main src/sample.cc)

