#pragma once

#include <fstream>
#include <string>
#include <vector>
#include <sstream>

class FileManager {
private:
//    std::string fileName;
//    std::string fileContent;

public:
//    FileManager(std::string fileName);
//    FileManager();

    //Getters
//    std::string getFileValue() const {return fileContent;}
//    std::string getFileName() const {return fileName;}

    // Methods
    static std::string readFile(std::string fileName) {
        std::ifstream fileIn(fileName);
        std::stringstream fileContents;
        fileContents << fileIn.rdbuf();
        return fileContents.str();
    }
};
