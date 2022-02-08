#include <iostream>
#include "FileManager.hh"
#include "ClassParser.hh"

int main(int argc, char const *argv[]) {
    std::vector<std::string> paths = FileManager::getFilePaths("../../src");
    for (const std::string& path : paths) {
        std::cout << path << std::endl;
        std::string classString = FileManager::readFile(path);
        std::vector<ClassInfo> classes = ClassParser::parseClasses(classString);
        for (ClassInfo classInfo : classes) {
            classInfo.prettyPrint();
        }
    }
    return 0;
}
