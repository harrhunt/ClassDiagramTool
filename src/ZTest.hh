#pragma once
#include <string>
#include <iostream>
#include "ClassInfo.hh"
#include "Type.hh"

class ZTest: public ClassInfo, public Type {
public:
    ZTest(std::string name, std::string type, std::string scope, std::string parameters);

private:
    static void testMethod() {
        int i = 10;
        i++;
        std::cout << i << std::endl;
    }
    std::string name;
    static void testerton() {
        int i = 10;
        i++;
        std::cout << i << std::endl;
    }
    std::string type;
    std::string scope;
    static void testings() {
        int i = 10;
        i++;
        std::cout << i << std::endl;
    }
    std::string parameters;
};