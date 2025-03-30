# --- CMake min version ---
cmake_minimum_required(VERSION 3.20)

# --- configure project name & version ---
project(project_name)
set(VERSION_MAJOR 0)
set(VERSION_MINOR 1)
# configure a header file to pass some of the CMake settings
# this copies the file 'xxx.h.in' to 'xxx.h' and replaces variables with values
# defined in this CMAKE file
message("PROJECT_SOURCE_DIR: ${PROJECT_SOURCE_DIR}")
configure_file(${PROJECT_SOURCE_DIR}/src/project-nameConfig.h.in ${PROJECT_BINARY_DIR}/project-nameConfig.h)  # rename these files

# --- set compiler flags ---
# set C++ standard & enforce it
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
# export compile commands
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
# set install prefix for 'install' command
set(CMAKE_INSTALL_PREFIX "/Users/Andy/Code/cpp-project-template")


add_subdirectory(src)
