cmake_minimum_required(VERSION 3.5)

# Project's name
project(MyProject)

# The following folder will be included
include_directories(${PROJECT_SRC_DIR}/inc)

#add_executable(MyProject xpr_proba.cpp)
add_executable(MyProject xpr_poker.cpp)
