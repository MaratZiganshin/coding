cmake_minimum_required(VERSION 3.7)
project(kdz)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp haffman.h ReadWriter.h)
add_executable(kdz ${SOURCE_FILES})