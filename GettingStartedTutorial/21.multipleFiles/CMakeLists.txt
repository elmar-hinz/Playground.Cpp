cmake_minimum_required(VERSION 3.5)
add_definitions(-std=c++11)
add_executable(main src/main.cpp)
add_library(counter src/counter/counter.cpp)

