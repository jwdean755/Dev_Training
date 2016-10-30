cmake_minimum_required (VERSION 2.6)
project (Dev_Training)
# The version number.
set (Dev_Training_VERSION_MAJOR 1)
set (Dev_Training_VERSION_MINOR 0)
 
       
# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
include_directories(include)
add_executable(Dev_Training ExampleCCode.c)
