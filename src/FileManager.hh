///
/// \Authors Hunter, Davis, Patience
/// \file src/FileManager.hh
/// \note A file manager with static methods for listing directories of files and reading in files as strings
///

#pragma once

#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <filesystem>
#include <regex>

class FileManager {
private:
//    std::string fileName;
//    std::string fileContent;

public:
//    FileManager(std::string fileName);
//    FileManager();

    //Getters
//    std::string getFileValue() const {return fileContent;}
//    std::string getFileName() const {return fileName;}

    // Methods
    static std::string readFile(std::string fileName) {
        std::ifstream fileIn(fileName);
        std::stringstream fileContents;
        fileContents << fileIn.rdbuf();
        return fileContents.str();
    }

    static std::vector<std::string> getFilePaths(std::string srcDirectory) {
        std::vector<std::string> filePaths;
        for (const auto &entry: std::filesystem::recursive_directory_iterator(srcDirectory)) {
            std::string path = entry.path().string();
            if (!entry.is_directory() && regex_match(path, std::regex(".*(h|hh|hxx)")))
                filePaths.push_back(path);
        }

        return filePaths;
    }
};
