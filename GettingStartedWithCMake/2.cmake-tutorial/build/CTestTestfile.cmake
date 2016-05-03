# CMake generated Testfile for 
# Source directory: /Volumes/Work/Learn/Playground.Cpp/GettingStartedWithCMake/2.cmake-tutorial/src
# Build directory: /Volumes/Work/Learn/Playground.Cpp/GettingStartedWithCMake/2.cmake-tutorial/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(TutorialRuns "Tutorial" "25")
add_test(TutorialComp25 "Tutorial" "25")
set_tests_properties(TutorialComp25 PROPERTIES  PASS_REGULAR_EXPRESSION "25 is 5")
subdirs(MathFunctions)
