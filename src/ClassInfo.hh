//
// Davis Bolt and Hunter Harris
// src/ClassInfo.hh
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

    // add fields and methods
    void addField(Field field);
    void addMethod(Method method);

    //getters and setters
    std::string getName();
    void setName(std::string name);

    std::vector<Field> getFields();

    std::vector<Method> getMethods();

    /// Neatly prints the the info of the class
    void prettyPrint();

private:
    std::string name;
    std::vector<Field> fields;
    std::vector<Method> methods;
};