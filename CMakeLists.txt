cmake_minimum_required(VERSION 3.25)
project(mclaunchlib)

set(CMAKE_CXX_STANDARD 17)

add_library(mclaunchlib SHARED mclaunchlib.cpp utils.cpp utils.h jvm.cpp jvm.h game.cpp game.h)
