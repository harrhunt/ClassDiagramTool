//
// Created by Davis on 1/26/2022.
//
#pragma once
#include <string>

/// Stores info about a class' field
/// Includes name, type, and scope
class Field {
public:
    Field(std::string name, std::string type, std::string scope);

    std::string getName();

    void setName(std::string name);

    std::string getType();

    void setType(std::string type);

    std::string getScope();

    void setScope(std::string scope);

private:
    std::string name;
    std::string type;
    std::string scope;
};
