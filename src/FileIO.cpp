#include <fstream>
#include <iostream>
#include <string>
#include "FileIO.hh"
#include <vector>


// FileIO custom constructor taking in file name and listedFunction as well as className
FileIO::FileIO(std::string file, std::std::vector<std::string> listedF, std::string classN):
  fileName(file), listedF(listedFunctions), className(classN){
    std::ifstream fileIn;
    fileIn.open(fileName, std::fstream::in);
    // Write a getter for the listed functions in the class
    // Write a getter for the class name
  }

// FileIO default constructor taking in the default "class.cpp" file.

// read method allows for more flexibility in definition through only requiring the file.
// this method should not be used for appending the listedFunctions.
