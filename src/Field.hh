//
// Created by Davis on 1/26/2022.
//
#pragma once
#include <iostream>
using namespace std;

class Field{
public:
    Field(string name, string type);

    string getName();
    void setName(string name);

    string getType();
    void setType(string type);
private:
    string name;
    string type;
};
