cmake_minimum_required(VERSION 3.7)
project(LZ77decode)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Node.h ReadWriter.h)
add_executable(LZ77decode ${SOURCE_FILES})