//
// Created by Davis on 1/26/2022.
//

#include "Field.hh"
#include  <string>

/// Stores info about a class' field
/// Includes name, type, and scope

Field::Field(std::string name, std::string type, std::string scope){
    Field::name = name;
    Field::type = type;
    Field::scope = scope;
}

std::string Field::getName(){
    return name;
}
void Field::setName(std::string name){
    Field::name = name;
}

std::string Field::getType(){
    return type;
}
void Field::setType(std::string type) {
    Field::type = type;
}

std::string Field::getScope(){
    return scope;
}
void Field::setScope(std::string scope) {
    Field::scope = scope;
}

