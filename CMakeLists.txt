cmake_minimum_required(VERSION 3.21)
project(ClassDiagramTool)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_EXE_LINKER_FLAGS "-static")

include_directories(src)

<<<<<<< HEAD
add_subdirectory(src)
add_subdirectory(tst)
add_subdirectory(lib/googletest)
=======
add_executable(ClassDiagramTool
        src/FileIO.cpp
        src/FileIO.hh
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
<<<<<<< HEAD
        src/Method.hh)
>>>>>>> 7dfbed0 (updated cmakelists.txt)
=======
        src/Method.hh src/GraphBuilder.cpp src/GraphBuilder.hh)
>>>>>>> 7bb4dbf (update CMakelists.txt)
