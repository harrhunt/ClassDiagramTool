//
// Created by Davis on 1/26/2022.
//

#include "ClassInfo.hh"
#include "Field.hh"
#include "Method.hh"
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

ClassInfo::ClassInfo() = default;

ClassInfo::ClassInfo(std::string name) {
    ClassInfo::name = name;
}

std::string ClassInfo::getName() {
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
    unsigned long long scopeWidth = 0;
    unsigned long long typeWidth = 0;
    unsigned long long nameWidth = 0;
    unsigned long long parameterWidth = 0;
    for (Method method: getMethods()) {
        scopeWidth = scopeWidth < method.getScope().length() ? method.getScope().length() : scopeWidth;
        typeWidth = typeWidth < method.getType().length() ? method.getType().length() : typeWidth;
        nameWidth = nameWidth < method.getName().length() ? method.getName().length() : nameWidth;
        parameterWidth = parameterWidth < method.getParameters().length() ? method.getParameters().length() : parameterWidth;
    }
    for (Method method: getMethods()) {
        std::cout << std::setw(scopeWidth + 2) << std::left << method.getScope() << " ";
        std::cout << std::setw(typeWidth + 2) << std::left << method.getType() << " ";
        std::cout << std::setw(nameWidth + 2) << std::left << method.getName() << " ";
        std::cout << std::setw(parameterWidth + 2) << std::left << method.getParameters() << std::endl;
    }
    std::cout << "``````````````````````````" << std::endl;
    std::cout << std::endl;
    std::cout << "Fields" << std::endl;
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
    scopeWidth = 0;
    typeWidth = 0;
    nameWidth = 0;
    for (Field field: getFields()) {
        scopeWidth = scopeWidth < field.getScope().length() ? field.getScope().length() : scopeWidth;
        typeWidth = typeWidth < field.getType().length() ? field.getType().length() : typeWidth;
        nameWidth = nameWidth < field.getName().length() ? field.getName().length() : nameWidth;
    }
    for (Field field: getFields()) {
        std::cout << std::setw(scopeWidth + 2) << std::left << field.getScope() << " ";
        std::cout << std::setw(typeWidth + 2) << std::left << field.getType() << " ";
        std::cout << std::setw(nameWidth + 2) << std::left << field.getName() << std::endl;
    }
    std::cout << "``````````````````````````" << std::endl;
    std::cout << std::endl << std::endl;
}


