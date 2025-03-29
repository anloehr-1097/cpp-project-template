# --- CMake min version ---
cmake_minimum_required(VERSION 3.20)

# --- configure project name & version ---
project(project_name)
set(VERSION_MAJOR 0)
set(VERSION_MINOR 1)
# configure a header file to pass some of the CMake settings
# this copies the file 'xxx.h.in' to 'xxx.h' and replaces variables with values
# defined in this CMAKE file
configure_file(project-nameConfig.h.in ${PROJECT_BINARY_DIR}/project-nameConfig.h)  # rename these files

# --- add executable ---
add_executable(project_name main.cpp)
# include directories add build dir to make header file visible
target_include_directories(
    project_name PUBLIC 
    "${PROJECT_BINARY_DIR}"
)

# --- set compiler flags ---
# set C++ standard & enforce it
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
# export compile commands
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
# set install prefix
set(CMAKE_INSTALL_PREFIX "/Users/Andy/Code/cpp-project-template")

# --- add custom library ---
# add custom library subdirectory 
add_subdirectory(MyLib)
# link custom library to executable
target_link_libraries(project_name PUBLIC MyLib)

# --- install ---
# install executable to bin directory
install(TARGETS project_name DESTINATION bin)
# install header file to include directory
install(FILES "${PROJECT_BINARY_DIR}/project-nameConfig.h"
  DESTINATION ${PROJECT_SOURCE_DIR}/include
  )

message(${PROJECT_BINARY_DIR})
message(${PROJECT_SOURCE_DIR})
