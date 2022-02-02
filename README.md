[![CMake](https://github.com/harrhunt/ClassDiagramTool/actions/workflows/cmake.yml/badge.svg)](https://github.com/harrhunt/ClassDiagramTool/actions/workflows/cmake.yml) [![Unit tests](https://github.com/harrhunt/ClassDiagramTool/actions/workflows/continuous-integration-workflow.yml/badge.svg)](https://github.com/harrhunt/ClassDiagramTool/actions/workflows/continuous-integration-workflow.yml)
# Class Diagram Tool
The Class Diagram Tool is meant to aide in the creation of UML diagrams from predefined projects. The tool takes in a source directory and associated header and source files to map classes, fields, and methods onto a graph according to their inheritance and multiplicity. This tool was built using C++ 20 standard using `windows.h` and `CMake`. 

To utilize the tool, see [building, installing, and linking](Building, installing, and linking).

## How it works
Given a source directory, the tool extracts the class name, methods, and functions using regex straight from the header file. It aggregates the classes and associated data into a vector of classes and maps them in a hash table according to their relations to other classes.

(Insert diagram here potentially)

## Building, installing, and linking
The Class Diagram Tool uses `CMake` to allow cross-platform builds. Traditional `CMake` commands work when building.

```shell
# Create an out-of-source build directory
mkdir build
cd build

# Generate Makefile
cmake [-D[OPTION=ON/OFF]] ../

# Build and install Class Diagram Tool
make all
```
To run the executables generated, the executables will be produced in the build directory associated with the original directory. For example, to run the source code, the file will be generated in `build/src/ClassDiagramTool_run` and the executable for the test functionality will be generated in `build/tst/ClassDiagramTool_tst`.

## Library Structure
The repository is divided into several main directories:
+ [tests](./tests): Contains unit tests and integration tests
+ [src](./src): Contains the source code for all Class Diagram Tool related implementation
+ [examples](./examples): Contains an example directory to exhibit the tool's usage.

## Code Modifications
Code modifications are kept in [ChangeLog.md](ChangeLog.md) file, containing major changes in formatting, layout, and class design.

## Developers
This project was created by:
+ [Davis Bolt](mailto:davisbolt@isu.edu)
+ [Hunter Harris](mailto:hunterharris@isu.edu)
+ [Patience Lamb](mailto:patiencelamb@isu.edu)

For Idaho State University's CS 4488: Senior Capstone Project taught by David Beard in Spring 2022.
