#include <string>
#include "ClassParser.hh"
#include <vector>

// ClassParser custom constructor taking in file contents and listedFunction as well as className
ClassParser::ClassParser(std::string classContents) : classContents(classContents) {
    // Write a getter for the listed functions in the class
//    classMethods = // Here goes regex
    // Write a getter for the class name
//    className = // Here goes regex for classN
    // Write a getter for listed getFields
//    classFields = //Here goes regex for fields
}

void ClassParser::parseClass() {
    if (this->classContents.length()) {
        parseMethods();
//        parseFields();
    }
}

void ClassParser::parseMethods() {
    std::smatch methodMatch;
    std::string classContentsCopy = classContents.c_str();
    while(std::regex_search(classContentsCopy, methodMatch, methodRegex)) {
        for (auto method : methodMatch) {
            classMethods.push_back(method);
        }
        classContentsCopy = methodMatch.suffix().str();
    }
}

void ClassParser::parseFields() {
    std::smatch fieldMatch;
    std::string classContentsCopy = classContents.c_str();
    while(std::regex_search(classContentsCopy, fieldMatch, methodRegex)) {
        for (auto method : fieldMatch) {
            classMethods.push_back(method);
        }
        classContentsCopy = fieldMatch.suffix().str();
    }
}