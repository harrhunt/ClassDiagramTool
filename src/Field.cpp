//
// Created by Davis on 1/26/2022.
//

#include "Field.hh"
#include  <iostream>
using namespace std;

Field::Field(string name, string type){
    Field::name = name;
    Field::type = type;
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

