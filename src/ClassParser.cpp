#include <string>
#include "ClassParser.hh"
#include <iostream>
#include <vector>

// ClassParser custom constructor taking in file contents and listedFunction as well as className
// ClassParser::ClassParser(std::string classContents) : classContents(classContents) {}

std::regex ClassParser::classRegex = std::regex(R"(class\s+([A-z0-9_]+)\s*\n*\{)");
std::regex ClassParser::methodRegex = std::regex(R"(((?:std::)?\w+(?:<.*>)? *&*\**) +(\w+) *(\(.*\)) *(?:const)*)");
std::regex ClassParser::fieldRegex = std::regex(R"((?:std::)*\w+(<.*>)*\s\w+\(.*\)(\sconst)*)");
std::regex ClassParser::scopeRegex = std::regex(R"((private|public|protected):)");