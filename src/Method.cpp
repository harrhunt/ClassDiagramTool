//
// Created by Davis on 1/26/2022.
//

#include "Method.hh"
#include  <iostream>
using namespace std;

Method::Method(string name, string type, string scope, string parameters){
    Method::name = name;
    Method::type = type;
    Method::scope = scope;
    Method::parameters = parameters;
}

string Method::getName(){
    return name;
}
void Method::setName(string name){
    Method::name = name;
}

string Method::getType(){
    return type;
}
void Method::setType(string type) {
    Method::type = type;
}

string Method::getScope(){
    return scope;
}
void Method::setScope(string scope) {
    Method::scope = scope;
}

string Method::getParameters(){
    return parameters;
}
void Method::setParameters(string parameters){
    Method::parameters = parameters;
}