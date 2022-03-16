//
// Davis Bolt and Hunter Harris
// src/Method.hh
//

#pragma once
#include <string>
#include "Type.hh"

/// Stores information about a class' method
/// Includes method name, return type, scope, and parameters

class Method {
public:
    Method(std::string name, Type type, std::string scope, std::string parameters);

    //Getters and setters
    std::string getName();
    void setName(std::string name);

    Type getType();
    void setType(Type type);

    std::string getScope();
    void setScope(std::string scope);

    std::string getParameters();
    void setParameters(std::string parameters);

private:
    std::string name;
    Type type;
    std::string scope;
    std::string parameters;
};