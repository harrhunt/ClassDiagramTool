//
// Davis Bolt and Hunter Harris
// src/Field.cpp
//

#include "Field.hh"

/// Stores info about a class' field
/// Includes name, type, and scope

Field::Field(std::string name, Type type, std::string scope) {
    Field::name = name;
    Field::type = type;
    Field::scope = scope;
}

//getters and setters
std::string Field::getName(){
    return name;
}
void Field::setName(std::string name){
    Field::name = name;
}

Type Field::getType(){
    return type;
}
void Field::setType(Type type) {
    Field::type = type;
}

std::string Field::getScope(){
    return scope;
}
void Field::setScope(std::string scope) {
    Field::scope = scope;
}

