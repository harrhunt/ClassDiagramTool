#include <iostream>
#include "FileManager.hh"
#include "ClassParser.hh"

int main(int argc, char const *argv[]) {
    std::string testString = FileManager::readFile("test.h");
    std::vector<ClassInfo> classes = ClassParser::parseClasses(testString);
    for (ClassInfo classInfo : classes) {
        classInfo.prettyPrint();
    }
    return 0;
}
