#include <iostream>
#include "FileIO.hh"
#include "ClassParser.hh"

int main(int argc, char const *argv[]) {
    std::string testString = FileIO::readFile("test.h");
    ClassParser testClass(testString);
    testClass.parseClass();
//  std::cout << testString << std::endl;
    std::cout << testClass.getMethods().size() << std::endl;
    for (auto method: testClass.getMethods()) {
        std::cout << method << std::endl;
    }
    return 0;
}
