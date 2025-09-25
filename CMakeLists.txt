cmake_minimum_required(VERSION 4.0)
project(cpp_playground)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(main main.cpp)
add_executable(sstream stringstream_math.cpp)
