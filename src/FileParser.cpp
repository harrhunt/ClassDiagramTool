#include <iostream>
#include <string>
#include "FileParser.hh"
#include "FileIO.hh"
#include <vector>

// FileParser custom constructor taking in file contents and listedFunction as well as className
FileParser::FileParser(std:string fileIn, std::vector<std::string> listedM, std::string classN, std::vector<std::string> listenF):
  fileName(fileIn), listedMethods(listedM), className(classN), listedFields(listedF){
    FileIO file(fileIn);
    std::string fileVal = file.getFileValues();
    // Write a getter for the listed functions in the class
    listedM = // Here goes regex
    // Write a getter for the class name
    classN = // Here goes regex for classN
    // Write a getter for listed getFields
    listedF = //Here goes regex for fields
  }
  // Default class.cpp instantiation
  FileParser:FileParser(){
    FileIO file;
    std::string fileVal = file.getFileValues();
  }
