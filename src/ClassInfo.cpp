//
// Created by Davis on 1/26/2022.
//

#include "ClassInfo.hh"
#include "Field.hh"
#include "Method.hh"
#include <iostream>
#include <string>
#include <vector>

ClassInfo::ClassInfo(std::string name) {
    ClassInfo::name = name;
}

string ClassInfo::getName() {
    return name;
}

void ClassInfo::setName(std::string name) {
    ClassInfo::name = name;
}

void ClassInfo::addField(Field field) {
    fields.push_back(field);
}

void ClassInfo::addMethod(Method method) {
    methods.push_back(method);
}

std::vector<Field> ClassInfo::getFields() {
    return fields;
}

std::vector<Method> ClassInfo::getMethods() {
    return methods;
}

void ClassInfo::prettyPrint() {
    std::cout << "==========================" << std::endl;
    std::cout << getName() << std::endl;
    std::cout << "==========================" << std::endl;
    std::cout << std::endl;
    std::cout << "Methods" << std::endl;
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
    for (Method method: getMethods()) {
        std::cout << method.getScope() << " ";
        std::cout << method.getType() << " ";
        std::cout << method.getName() << " ";
        std::cout << method.getParameters() << std::endl;
    }
    std::cout << "``````````````````````````" << std::endl;
    std::cout << std::endl;
    std::cout << "Fields" << std::endl;
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
    for (Field field: getFields()) {
        std::cout << field.getScope() << " ";
        std::cout << field.getType() << " ";
        std::cout << field.getName() << std::endl;
    }
    std::cout << "``````````````````````````" << std::endl;
    std::cout << std::endl << std::endl;
}