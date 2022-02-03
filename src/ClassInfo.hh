//
// Created by Davis on 1/26/2022.
//
#pragma once

#include "Field.hh"
#include "Method.hh"
#include <iostream>
#include <string>
#include <vector>


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