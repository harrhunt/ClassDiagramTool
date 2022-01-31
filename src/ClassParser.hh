#pragma once

#include <string>
#include <vector>
#include <regex>


class ClassParser {
private:
    std::string classContents;
    std::vector<std::string> classMethods;
    std::vector<std::string> classFields;
    std::string className;
    std::regex methodRegex = std::regex(R"((?:std::)*\w+(?:<.*>)*\s\w+\(.*\)(?:\sconst)*)");
    std::regex fieldRegex = std::regex(R"((std::)*\w+(<.*>)*\s\w+\(.*\)(\sconst)*)", std::regex_constants::nosubs);

public:
    ClassParser(std::string classContents);

    //Getters
    std::vector<std::string> getMethods() const { return classMethods; }

    std::string getName() const { return className; }

    std::vector<std::string> getFields() const { return classFields; }

    // Methods
    void parseClass();


private:
    void parseMethods();

    void parseFields();
};
