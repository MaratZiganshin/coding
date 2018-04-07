cmake_minimum_required(VERSION 3.7)
project(reshuffle)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES B.cpp BigIntegerAlgorithms.hh)
add_executable(reshuffle ${SOURCE_FILES})