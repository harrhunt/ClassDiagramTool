cmake_minimum_required(VERSION 3.21)
project(ClassDiagramTool)

set(CMAKE_CXX_STANDARD 20)

include_directories(src)

add_executable(ClassDiagramTool
        src/FileIO.cpp
        src/FileIO.hh
        src/main.cpp)
