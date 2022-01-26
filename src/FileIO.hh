#pragma once
#include <fstream>
#include <string>
#include <vector>

class FileIO{
  private:
    std::string fileName;
    std::vector<std::string> listedMethods;
    std::vector<std::string> listedFields;
    std::string className;

  public:
    FileIO(std::string file, std::vector<std::string> listedM, std::string classN, std::std::vector<std::string> listedF);
    FileIO();

    //Getters
    std::vector<std::string> getFunctions() const {return listedMethods;}
    std::string getName() const {return className;}
    std::vector<std::string> getFields() const {return listedFields;}

    // Methods
    void readFile(std::string file);
};
