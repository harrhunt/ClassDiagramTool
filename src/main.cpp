#include <iostream>
#include "FileManager.hh"
#include "ClassParser.hh"

int main(int argc, char const *argv[]) {
    std::vector<std::string> paths = FileManager::getFilePaths(R"(C:\Users\RockP\CLionProjects\ClassDiagramTool\src)");
    std::string testString = FileManager::readFile("test.h");
    std::vector<ClassInfo> classes = ClassParser::parseClasses(testString);
    for (ClassInfo classInfo : classes) {
        classInfo.prettyPrint();
    }
    for (const std::string& path : paths) {
        std::cout << path << std::endl;
    }
    return 0;
}
