#include "ZTest.hh"
#include  <string>

ZTest::ZTest(std::string name, std::string type, std::string scope, std::string parameters) {
    ZTest::name = name;
    ZTest::type = type;
    ZTest::scope = scope;
    ZTest::parameters = parameters;
}

