//
// Created by Davis on 1/26/2022.
//

#include "ClassInfo.hh"
#include "Field.hh"
#include "Method.hh"
#include <iostream>
#include <vector>
using namespace std;

ClassInfo::ClassInfo(string name){
    ClassInfo::name = name;
}

string ClassInfo::getName(){
    return name;
}
void ClassInfo::setName(string name){
    ClassInfo::name = name;
}

void ClassInfo::addField(Field field){
    fields.push_back(field);
}
void ClassInfo::addMethod(Method method){
    methods.push_back(method);
}