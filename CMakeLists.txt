cmake_minimum_required(VERSION 3.24)
project(cave_explore)

set(CMAKE_CXX_STANDARD 17)

add_executable(cave_explore main.cpp Charactor.cpp global.h Action.cpp Fight.cpp Human.cpp)
