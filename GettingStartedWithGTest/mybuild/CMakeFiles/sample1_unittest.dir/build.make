# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/Cellar/cmake/2.8.10.2/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/2.8.10.2/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/local/Cellar/cmake/2.8.10.2/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/elmar/Playground.Cpp/GettingStartedWithGTest/gtest

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/elmar/Playground.Cpp/GettingStartedWithGTest/mybuild

# Include any dependencies generated for this target.
include CMakeFiles/sample1_unittest.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/sample1_unittest.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sample1_unittest.dir/flags.make

CMakeFiles/sample1_unittest.dir/samples/sample1_unittest.cc.o: CMakeFiles/sample1_unittest.dir/flags.make
CMakeFiles/sample1_unittest.dir/samples/sample1_unittest.cc.o: /Users/elmar/Playground.Cpp/GettingStartedWithGTest/gtest/samples/sample1_unittest.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/elmar/Playground.Cpp/GettingStartedWithGTest/mybuild/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/sample1_unittest.dir/samples/sample1_unittest.cc.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS)   -DGTEST_HAS_PTHREAD=1  -o CMakeFiles/sample1_unittest.dir/samples/sample1_unittest.cc.o -c /Users/elmar/Playground.Cpp/GettingStartedWithGTest/gtest/samples/sample1_unittest.cc

CMakeFiles/sample1_unittest.dir/samples/sample1_unittest.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sample1_unittest.dir/samples/sample1_unittest.cc.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS)   -DGTEST_HAS_PTHREAD=1  -E /Users/elmar/Playground.Cpp/GettingStartedWithGTest/gtest/samples/sample1_unittest.cc > CMakeFiles/sample1_unittest.dir/samples/sample1_unittest.cc.i

CMakeFiles/sample1_unittest.dir/samples/sample1_unittest.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sample1_unittest.dir/samples/sample1_unittest.cc.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS)   -DGTEST_HAS_PTHREAD=1  -S /Users/elmar/Playground.Cpp/GettingStartedWithGTest/gtest/samples/sample1_unittest.cc -o CMakeFiles/sample1_unittest.dir/samples/sample1_unittest.cc.s

CMakeFiles/sample1_unittest.dir/samples/sample1_unittest.cc.o.requires:
.PHONY : CMakeFiles/sample1_unittest.dir/samples/sample1_unittest.cc.o.requires

CMakeFiles/sample1_unittest.dir/samples/sample1_unittest.cc.o.provides: CMakeFiles/sample1_unittest.dir/samples/sample1_unittest.cc.o.requires
	$(MAKE) -f CMakeFiles/sample1_unittest.dir/build.make CMakeFiles/sample1_unittest.dir/samples/sample1_unittest.cc.o.provides.build
.PHONY : CMakeFiles/sample1_unittest.dir/samples/sample1_unittest.cc.o.provides

CMakeFiles/sample1_unittest.dir/samples/sample1_unittest.cc.o.provides.build: CMakeFiles/sample1_unittest.dir/samples/sample1_unittest.cc.o

CMakeFiles/sample1_unittest.dir/samples/sample1.cc.o: CMakeFiles/sample1_unittest.dir/flags.make
CMakeFiles/sample1_unittest.dir/samples/sample1.cc.o: /Users/elmar/Playground.Cpp/GettingStartedWithGTest/gtest/samples/sample1.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/elmar/Playground.Cpp/GettingStartedWithGTest/mybuild/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/sample1_unittest.dir/samples/sample1.cc.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS)   -DGTEST_HAS_PTHREAD=1  -o CMakeFiles/sample1_unittest.dir/samples/sample1.cc.o -c /Users/elmar/Playground.Cpp/GettingStartedWithGTest/gtest/samples/sample1.cc

CMakeFiles/sample1_unittest.dir/samples/sample1.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sample1_unittest.dir/samples/sample1.cc.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS)   -DGTEST_HAS_PTHREAD=1  -E /Users/elmar/Playground.Cpp/GettingStartedWithGTest/gtest/samples/sample1.cc > CMakeFiles/sample1_unittest.dir/samples/sample1.cc.i

CMakeFiles/sample1_unittest.dir/samples/sample1.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sample1_unittest.dir/samples/sample1.cc.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS)   -DGTEST_HAS_PTHREAD=1  -S /Users/elmar/Playground.Cpp/GettingStartedWithGTest/gtest/samples/sample1.cc -o CMakeFiles/sample1_unittest.dir/samples/sample1.cc.s

CMakeFiles/sample1_unittest.dir/samples/sample1.cc.o.requires:
.PHONY : CMakeFiles/sample1_unittest.dir/samples/sample1.cc.o.requires

CMakeFiles/sample1_unittest.dir/samples/sample1.cc.o.provides: CMakeFiles/sample1_unittest.dir/samples/sample1.cc.o.requires
	$(MAKE) -f CMakeFiles/sample1_unittest.dir/build.make CMakeFiles/sample1_unittest.dir/samples/sample1.cc.o.provides.build
.PHONY : CMakeFiles/sample1_unittest.dir/samples/sample1.cc.o.provides

CMakeFiles/sample1_unittest.dir/samples/sample1.cc.o.provides.build: CMakeFiles/sample1_unittest.dir/samples/sample1.cc.o

# Object files for target sample1_unittest
sample1_unittest_OBJECTS = \
"CMakeFiles/sample1_unittest.dir/samples/sample1_unittest.cc.o" \
"CMakeFiles/sample1_unittest.dir/samples/sample1.cc.o"

# External object files for target sample1_unittest
sample1_unittest_EXTERNAL_OBJECTS =

sample1_unittest: CMakeFiles/sample1_unittest.dir/samples/sample1_unittest.cc.o
sample1_unittest: CMakeFiles/sample1_unittest.dir/samples/sample1.cc.o
sample1_unittest: CMakeFiles/sample1_unittest.dir/build.make
sample1_unittest: libgtest_main.a
sample1_unittest: libgtest.a
sample1_unittest: CMakeFiles/sample1_unittest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable sample1_unittest"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sample1_unittest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sample1_unittest.dir/build: sample1_unittest
.PHONY : CMakeFiles/sample1_unittest.dir/build

CMakeFiles/sample1_unittest.dir/requires: CMakeFiles/sample1_unittest.dir/samples/sample1_unittest.cc.o.requires
CMakeFiles/sample1_unittest.dir/requires: CMakeFiles/sample1_unittest.dir/samples/sample1.cc.o.requires
.PHONY : CMakeFiles/sample1_unittest.dir/requires

CMakeFiles/sample1_unittest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/sample1_unittest.dir/cmake_clean.cmake
.PHONY : CMakeFiles/sample1_unittest.dir/clean

CMakeFiles/sample1_unittest.dir/depend:
	cd /Users/elmar/Playground.Cpp/GettingStartedWithGTest/mybuild && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/elmar/Playground.Cpp/GettingStartedWithGTest/gtest /Users/elmar/Playground.Cpp/GettingStartedWithGTest/gtest /Users/elmar/Playground.Cpp/GettingStartedWithGTest/mybuild /Users/elmar/Playground.Cpp/GettingStartedWithGTest/mybuild /Users/elmar/Playground.Cpp/GettingStartedWithGTest/mybuild/CMakeFiles/sample1_unittest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sample1_unittest.dir/depend

