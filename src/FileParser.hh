#pragma once
#include <string>
#include <vector>

class FileParser{
private:
    std::string fileContents;
    std::vector<std::string> listedMethods;
    std::vector<std::string> listedFields;
    std::string className;

public:
    FileParser(std::string fileContents);
    FileParser();

    //Getters
    std::vector<std::string> getFunctions() const {return listedMethods;}
    std::string getName() const {return className;}
    std::vector<std::string> getFields() const {return listedFields;}

    // Methods
};
