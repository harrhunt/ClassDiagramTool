//
// Created by Davis on 1/26/2022.
//
#pragma once

#include "Field.hh"
#include "Method.hh"
#include <iostream>
#include <string>
#include <vector>

/// Holds necessary class data for the Class Diagram
/// Contains a name and vectors of Fields and Methods
class ClassInfo {
public:
    ClassInfo();

    ClassInfo(std::string name);

    std::string getName();

    void setName(std::string name);

    void addField(Field field);

    void addMethod(Method method);

    std::vector<Field> getFields();

    std::vector<Method> getMethods();

    void prettyPrint();

private:
    std::string name;
    std::vector<Field> fields;
    std::vector<Method> methods;
};