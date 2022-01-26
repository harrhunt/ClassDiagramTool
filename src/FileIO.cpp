#include <fstream>
#include <iostream>
#include <string>
#include "FileIO.hh"
#include <vector>


// FileIO custom constructor taking in file name
FileIO::FileIO(std::ifstream fileN): fileName(fileN){
    std::ifstream fileName;
    fileIn.open(fileName, std::fstream::in);
    // Write a getter for the listed functions in the class

    // Write a getter for the class name
  }

// FileIO default constructor taking in the default "class.cpp" file.
