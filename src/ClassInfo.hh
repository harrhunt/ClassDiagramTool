//
// Created by Davis on 1/26/2022.
//
#pragma once

#include "Field.hh"
#include "Method.hh"
#include <iostream>
#include <vector>

using namespace std;

class ClassInfo {
public:
    ClassInfo(string name);

    string getName();

    void setName(string name);

    void addField(Field field);

    void addMethod(Method method);

    std::vector<Field> getFields();

    std::vector<Method> getMethods();

    void prettyPrint();

private:
    string name;
    vector<Field> fields;
    vector<Method> methods;
};