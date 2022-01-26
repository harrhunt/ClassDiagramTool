#include <fstream>
#include <iostream>
#include <string>
#include "FileIO.hh"
#include <vector>


// FileIO custom constructor taking in file name
FileIO::FileIO(std::string fileN): fileName(fileN){
    std::string fileName;
    fileIn.open(fileName, std::fstream::in);
    fileValues = ((std::istreambuf_iterator<char>(fileName) ),
                      (std::istreambuf_iterator<char>()));

  }

// FileIO default constructor taking in the default "class.cpp" file.
