///
/// \Authors Hunter, Patience
/// \file src/ClassParser.cpp
/// \note The implementation file for the class parser class. Only initializes the static regex fields for the header file.
///

#include "ClassParser.hh"

std::regex ClassParser::classRegex = std::regex(R"(class\s+([A-z0-9_]+)\s*\n*\{)");
std::regex ClassParser::methodRegex = std::regex(R"((?:static\s+)?((?:std::)?\w+(?:<.*>)? *&*\**) +(\w+) *(\(.*\)) *(?:const)*)");
std::regex ClassParser::fieldRegex = std::regex(R"((?:std::)*\w+(<.*>)*\s\w+\(.*\)(\sconst)*)");
std::regex ClassParser::scopeRegex = std::regex(R"((private|public|protected):)");