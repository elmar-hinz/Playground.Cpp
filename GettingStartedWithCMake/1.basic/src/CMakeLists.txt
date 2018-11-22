cmake_minimum_required (VERSION 3.0)

# The version number
project (Tutorial)
set (Tutorial_VERSION_MAJOR 1)
set (Tutorial_VERSION_MINOR 0)

# Configure a header file to pass some of the CMake settings to the source code
configure_file (
    "${PROJECT_SOURCE_DIR}/TutorialConfig.h.in"
    "${PROJECT_BINARY_DIR}/TutorialConfig.h"
    )

# Add the binary tree to the search path for include files so that we will
# find TutorialConfig.

include_directories ("${PROJECT_BINARY_DIR}")

# Executalbe
add_executable (Tutorial tutorial.cpp)

