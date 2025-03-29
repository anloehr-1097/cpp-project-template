# CMake min version
cmake_minimum_required(VERSION 3.20)
add_library(MyLib lib_module.cpp)
target_include_directories(MyLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
# # anybody who uses this library needs to include the current source dir
target_include_directories(
    MyLib INTERFACE 
    ${CMAKE_CURRENT_SOURCE_DIR}
)


install(TARGETS MyLib DESTINATION lib)
install(FILES lib_module.h DESTINATION include)
