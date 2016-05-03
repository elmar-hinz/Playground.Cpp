# configure
cmake_minimum_required(VERSION 3.5)
add_definitions(-std=c++11)

# compile

# Build counter libary
add_library(counter counter/counter.cpp)

# Find counter library headers
include_directories ("${PROJECT_SOURCE_DIR}/counter")

# Build the executable
add_executable(main main.cpp)

# Link against library
target_link_libraries(main counter)

