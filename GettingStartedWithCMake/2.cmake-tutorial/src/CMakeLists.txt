############################################################
# 0. configure
############################################################

cmake_minimum_required (VERSION 2.6)
project (Tutorial)
set (Tutorial_VERSION_MAJOR 1)
set (Tutorial_VERSION_MINOR 0)


############################################################
# 1. cmake
############################################################

# Use MathFunction/CMakeList.txt.
add_subdirectory(MathFunctions)


############################################################
# 2. make
############################################################

# Configure a header file to pass some of the CMake settings
# to the source code.
# Relative path: in from source, out from binary directory.
configure_file (
    "TutorialConfig.h.in"
    "TutorialConfig.h"
    )


############################################################
# 3. compile
############################################################

# Add the binary tree to the search path for include files
# so that we will find TutorialConfig.h.
include_directories("${PROJECT_BINARY_DIR}")

# Add libraries.
include_directories ("${PROJECT_SOURCE_DIR}/MathFunctions")

# Add executables.
add_executable(Tutorial tutorial.cxx)

# Link executables.
target_link_libraries(Tutorial MathFunctions)


############################################################
# 4. run
############################################################

# Testing
include(CTest)

# Does the application run?
add_test (TutorialRuns Tutorial 25)

# Does it sqrt of 25?
add_test (TutorialComp25 Tutorial 25)
set_tests_properties (TutorialComp25
      PROPERTIES PASS_REGULAR_EXPRESSION "25 is 5")


