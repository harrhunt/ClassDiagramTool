//
// Created by Davis on 1/26/2022.
//
#pragma once

#include <iostream>
using namespace std;

class Method{
public:
    Method(string name, string type, string scope, string parameters);

    string getName();
    void setName(string name);

    string getType();
    void setType(string type);

    string getScope();
    void setScope(string scope);

    string getParameters();
    void setParameters(string parameters);
private:
    string name;
    string type;
    string scope;
    string parameters;
};