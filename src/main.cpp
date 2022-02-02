#include <iostream>
#include "FileIO.hh"
#include "ClassParser.hh"

int main(int argc, char const *argv[]) {
    std::string testString = FileIO::readFile("test.h");
    std::vector<ClassInfo> classes = ClassParser::parseClasses(testString);
    for (ClassInfo classInfo : classes) {
        classInfo.prettyPrint();
    }
    return 0;
}
