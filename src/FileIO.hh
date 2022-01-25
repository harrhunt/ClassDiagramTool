#pragma once
#include <fstream>
#include <string>
#include <vector>

class FileIO{
  private:
    std::string fileName;
    std::vector<std::string> listedFunctions;
    std::string className;

  public:
    FileIO(std::string file, std::vector<std::string> listedF, std::string classN);
    FileIO();

    //Getters
    std::vector<std::string> getFunctions() const {return listedFunctions;}
    std::string getName() const {return className;}

    // Methods
    void readFile(std::string file);
};
