cmake_minimum_required(VERSION 3.10.0)

project(sportradar_exercise VERSION 0.1.0 LANGUAGES C CXX)

add_executable(sportradar_exercise main.cpp)

include(CTest)
enable_testing()

add_subdirectory(src)
add_subdirectory(tests)