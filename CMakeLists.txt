cmake_minimum_required(VERSION 3.8)
project(Poptionals)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Werror=return-type")

add_executable(Poptionals main.cpp)
