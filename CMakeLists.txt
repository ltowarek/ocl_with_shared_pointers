cmake_minimum_required(VERSION 3.4)
project(ocl_with_shared_pointers)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

find_package(OpenCL REQUIRED)

include_directories(${OpenCL_INCLUDE_DIR})
add_executable(ocl_with_shared_pointers main.cpp)
target_link_libraries(ocl_with_shared_pointers ${OpenCL_LIBRARIES})
