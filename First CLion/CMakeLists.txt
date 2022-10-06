cmake_minimum_required(VERSION 3.19)
project(First_CLion)

set(CMAKE_CXX_STANDARD 20)

add_executable(First_CLion main.cpp)

include_directories("C:\\MinGW\\include\\graphics.h")

target_link_libraries(First_CLion "C:\\MinGW\\include")

