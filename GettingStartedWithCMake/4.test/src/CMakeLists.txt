cmake_minimum_required (VERSION 3.0)

# The version number
project (Tutorial)
set (Tutorial_VERSION_MAJOR 1)
set (Tutorial_VERSION_MINOR 0)

# Should we use our own math functions?
option (USE_MYMATH "Use tutorial provided math implementation" ON)

# Configure a header file to pass some of the CMake settings to the source code
configure_file (
    "${PROJECT_SOURCE_DIR}/TutorialConfig.h.in"
    "${PROJECT_BINARY_DIR}/TutorialConfig.h"
)

# Use math?
if (USE_MYMATH)
    include_directories("${PROJECT_SOURCE_DIR}/MathFunctions")
    add_subdirectory (MathFunctions)
    set (EXTRA_LIBS ${EXTRA_LIBS} MathFunctions)
endif (USE_MYMATH)

# Add the binary tree to the search path for include files so that we will
# find TutorialConfig.
include_directories ("${PROJECT_BINARY_DIR}")

# Files
add_executable (Tutorial tutorial.cpp)
target_link_libraries (Tutorial ${EXTRA_LIBS})

# Install
install (TARGETS Tutorial DESTINATION bin)
install (FILES "${PROJECT_BINARY_DIR}/TutorialConfig.h" DESTINATION include)

IF(CMAKE_INSTALL_PREFIX_INITIALIZED_TO_DEFAULT)
    SET(CMAKE_INSTALL_PREFIX "${PROJECT_BINARY_DIR}" CACHE PATH "Install prefix" FORCE)
ENDIF(CMAKE_INSTALL_PREFIX_INITIALIZED_TO_DEFAULT)

# Testing
include(CTest)

add_test(TutorialRuns Tutorial 25)

