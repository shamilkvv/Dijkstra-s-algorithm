cmake_minimum_required(VERSION 3.24)
project(untitled3)

set(CMAKE_CXX_STANDARD 20)

add_executable(untitled3 main.cpp)
target_link_libraries(untitled3 gtest gtest_main)
