//
// Created by Davis on 1/26/2022.
//
#pragma once
#include <iostream>
using namespace std;

class Field{
public:
    Field(string name, string type, string scope);

    string getName();
    void setName(string name);

    string getType();
    void setType(string type);

    string getScope();
    void setScope(string scope);
private:
    string name;
    string type;
    string scope;
};
