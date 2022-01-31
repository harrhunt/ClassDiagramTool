cmake_minimum_required(VERSION 3.21)
project(ClassDiagramTool)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_EXE_LINKER_FLAGS "-static")

include_directories(src)

add_executable(ClassDiagramTool
        src/FileIO.cpp
        src/FileIO.hh
        src/ClassParser.cpp
        src/ClassParser.hh
        src/main.cpp
        src/Graph.cpp
        src/Graph.hh
        src/Edge.cpp
        src/Edge.hh
        src/Node.cpp
        src/Node.hh
        src/ClassInfo.cpp
        src/ClassInfo.hh
        src/Field.cpp
        src/Field.hh
        src/Method.cpp
        src/Method.hh src/GraphBuilder.cpp src/GraphBuilder.hh)
