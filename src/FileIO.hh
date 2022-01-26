#pragma once
#include <fstream>
#include <string>
#include <vector>

class FileIO{
  private:
    std::string fileName;
    std::string fileValues;

  public:
    FileIO(std::string fileN);
    FileIO();

    //Getters
    std::string getFileValues() const {return fileValues;}
    std::string getFileName() const {return fileName;}

};
