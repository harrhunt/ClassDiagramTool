#pragma once
#include <fstream>
#include <string>
#include <vector>

class FileIO{
private:
    std::string fileName;
    std::string fileContent;

public:
    FileIO(std::string fileName);
    FileIO();

    //Getters
    std::string getFileValue() const {return fileContent;}
    std::string getFileName() const {return fileName;}

    // Methods
    void readFile(std::string file);
};
