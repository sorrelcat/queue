cmake_minimum_required(VERSION 3.12)
project(queue)

set(CMAKE_CXX_STANDARD 11)

add_executable(queue main.cpp queue.h queue.cpp element.h element.cpp)