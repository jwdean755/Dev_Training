cmake_minimum_required (VERSION 2.6)
project (ExampleCCodeTutorial)
# The version number.
set (ExampleCCodeTutorial_VERSION_MAJOR 1)
set (ExampleCCodeTutorial_VERSION_MINOR 0)
 
       
# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
include_directories(include)
add_executable(ExampleCCodeTutorial ExampleCCodeMain.c ExampleCCodeFuncs.c)
add_executable(UTforExampleCCode ./unitTests/UTforExampleCCode.c ./ExampleCCodeFuncs.c)

