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

# --- simple testing ---
enable_testing()  # enable testing for this project
add_test(NAME Runs-no-problem COMMAND project_name)  # check if executable runs (does not fail)
