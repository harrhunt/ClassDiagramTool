//
// Created by Davis on 1/26/2022.
//

#include "Field.hh"
#include  <iostream>
using namespace std;

Field::Field(string name, string type, string scope){
    Field::name = name;
    Field::type = type;
    Field::scope = scope;
}

string Field::getName(){
    return name;
}
void Field::setName(string name){
    Field::name = name;
}

string Field::getType(){
    return type;
}
void Field::setType(string type) {
    Field::type = type;
}

string Field::getScope(){
    return scope;
}
void Field::setScope(string scope) {
    Field::scope = scope;
}

