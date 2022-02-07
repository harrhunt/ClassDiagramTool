//
// Created by Davis on 1/26/2022.
//

#include "Method.hh"
#include  <string>

/// Stores information about a class' method
/// Includes method name, return type, scope, and parameters

Method::Method(std::string name, std::string type, std::string scope, std::string parameters){
    Method::name = name;
    Method::type = type;
    Method::scope = scope;
    Method::parameters = parameters;
}

std::string Method::getName(){
    return name;
}
void Method::setName(std::string name){
    Method::name = name;
}

std::string Method::getType(){
    return type;
}
void Method::setType(std::string type) {
    Method::type = type;
}

std::string Method::getScope(){
    return scope;
}
void Method::setScope(std::string scope) {
    Method::scope = scope;
}

std::string Method::getParameters(){
    return parameters;
}
void Method::setParameters(std::string parameters){
    Method::parameters = parameters;
}