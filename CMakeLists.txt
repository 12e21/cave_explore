cmake_minimum_required(VERSION 3.24)
project(cave_explore)

set(CMAKE_CXX_STANDARD 17)

add_executable(cave_explore main.cpp Charactor/Charactor.cpp Action/Action.cpp Action/Fight.cpp Charactor/Human.cpp
                Engine/Engine.cpp Engine/Fight_engine.cpp AI/AI.cpp AI/Fight_AI.cpp UI/UI.cpp UI/Fight_UI.cpp)
