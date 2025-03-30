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

# --- set compiler flags ---
# set C++ standard & enforce it
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
# export compile commands
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
# set install prefix for 'install' command
set(CMAKE_INSTALL_PREFIX "/Users/Andy/Code/cpp-project-template")

# --- add executable ---
add_executable(project_name main.cpp)
# include directories add build dir to make header file visible
target_include_directories(
    project_name PUBLIC 
    "${PROJECT_BINARY_DIR}"
)
# --- add custom library ---
# add custom library subdirectory 
add_subdirectory(MyLib)
# link custom library to executable
target_link_libraries(project_name PRIVATE MyLib)


# --- add 3rd party library ---
find_package(fmt CONFIG REQUIRED)
# link fmt library to executable
target_link_libraries(project_name PRIVATE fmt::fmt)
# include fmt header files (optional, should not be necessary with find_package)
# target_include_directories(project_name PRIVATE /usr/local/include)

# --- install (optional) ---
# install executable to bin directory
install(TARGETS project_name DESTINATION bin)
# install header file to include directory
install(FILES "${PROJECT_BINARY_DIR}/project-nameConfig.h"
  DESTINATION ${PROJECT_SOURCE_DIR}/include
  )

# --- testing ---
enable_testing()  # enable testing for this project
add_test(NAME Runs-no-problem COMMAND project_name)  # check if executable runs (does not fail)


