#include <iostream>
#include "FileManager.hh"
#include "ClassParser.hh"

int main(int argc, char const *argv[]) {
<<<<<<< HEAD
    std::string testString = FileManager::readFile("test.h");
=======
    std::string testString = FileIO::readFile("test.h");
>>>>>>> 5d0c1dd (testing for class parsing added)
    std::vector<ClassInfo> classes = ClassParser::parseClasses(testString);
    for (ClassInfo classInfo : classes) {
        classInfo.prettyPrint();
    }
    return 0;
}
