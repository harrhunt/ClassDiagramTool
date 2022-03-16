//
// Davis Bolt and Hunter Harris
// src/Field.hh
//

#pragma once
#include <string>
#include "Type.hh"

/// Stores info about a class' field
/// Includes name, type, and scope
class Field {
public:
    Field();
    Field(std::string name, Type type, std::string scope);

    //getters and setters
    std::string getName();
    void setName(std::string name);

    Type getType();
    void setType(Type type);

    std::string getScope();
    void setScope(std::string scope);

private:
    std::string name;
    Type type;
    std::string scope;
};
