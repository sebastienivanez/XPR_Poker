cmake_minimum_required(VERSION 3.5)
project(MyProject) # Project name
set(CMAKE_CXX_FLAGS "-Wextra -Wall -Werror -Wno-xxx -pedantic") # Compilation flags

# The following folder will be included
include_directories(${PROJECT_SRC_DIR}/inc)

# Set the target name and source
#add_executable(MyProject xpr_proba.cpp)
add_executable(MyProject src/xpr_poker.cpp)
