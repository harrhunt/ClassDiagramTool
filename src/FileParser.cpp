#include <iostream>
#include <string>
#include "FileParser.hh"
#include "FileIO.hh"
#include <vector>

// FileParser custom constructor taking in file contents and listedFunction as well as className
FileParser::FileParser(std::string fileContents) : fileContents(fileContents) {
    // Write a getter for the listed functions in the class
//    listedMethods = // Here goes regex
    // Write a getter for the class name
//    className = // Here goes regex for classN
    // Write a getter for listed getFields
//    listedFields = //Here goes regex for fields
}

// Default class.cpp instantiation
FileParser::FileParser() {

}