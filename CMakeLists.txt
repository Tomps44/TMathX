cmake_minimum_required(VERSION 3.23)
project(glb)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)


add_executable(glb_tests main.cpp)

target_include_directories(glb_tests PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include/)


