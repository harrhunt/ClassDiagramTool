#pragma once
#include <string>
#include <vector>

class FileParser{
  private:
    std::string fileIn;
    std::vector<std::string> listedMethods;
    std::vector<std::string> listedFields;
    std::string className;

  public:
    FileParser(std::string fileIn, std::vector<std::string> listedM, std::string classN, std::std::vector<std::string> listedF);
    FileParser();

    //Getters
    std::vector<std::string> getFunctions() const {return listedMethods;}
    std::string getName() const {return className;}
    std::vector<std::string> getFields() const {return listedFields;}

    // Methods
};
