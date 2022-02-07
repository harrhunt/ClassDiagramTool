//
// Created by Davis on 1/26/2022.
//
#pragma once
#include <string>

/// Stores information about a class' method
/// Includes method name, return type, scope, and parameters

class Method {
public:
    Method(std::string name, std::string type, std::string scope, std::string parameters);

    std::string getName();

    void setName(std::string name);

    std::string getType();

    void setType(std::string type);

    std::string getScope();

    void setScope(std::string scope);

    std::string getParameters();

    void setParameters(std::string parameters);

private:
    std::string name;
    std::string type;
    std::string scope;
    std::string parameters;
};