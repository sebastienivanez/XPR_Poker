cmake_minimum_required(VERSION 3.5)
project(XPR_Poker) # Project name
set(CMAKE_CXX_FLAGS "-Wextra -Wall -Werror -pedantic") # Compilation flags

# The following folder will be included
include_directories(${PROJECT_SRC_DIR}/inc)

# Set the target name and source
#add_executable(MyProject src/xpr_proba.cpp)
add_executable(XPR_Poker src/main.cpp)
