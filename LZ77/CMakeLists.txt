cmake_minimum_required(VERSION 3.7)
project(LZ77)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp ReadWriter.h Node.h)
add_executable(LZ77 ${SOURCE_FILES})