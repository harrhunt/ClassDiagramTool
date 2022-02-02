#pragma once

#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <filesystem>
#include <regex>
using namespace std;
namespace fs = std::filesystem;

class FileManager {
private:
//    std::string fileName;
//    std::string fileContent;

public:
//    FileManager(std::string fileName);
//    FileManager();


    //Getters
    std::string getFileValues() const {return fileValues;}
    std::string getFileName() const {return fileName;}



    //Getters
//    std::string getFileValue() const {return fileContent;}
//    std::string getFileName() const {return fileName;}

    // Methods
    static string readFile(string fileName) {
        ifstream fileIn(fileName);
        stringstream fileContents;
        fileContents << fileIn.rdbuf();
        return fileContents.str();
    }

    static vector<string> getFilePaths(string srcDirectory){
        vector<string> filePaths;
        for (const auto & entry : fs::recursive_directory_iterator(srcDirectory)){
            string path = entry.path().string();
            if (!entry.is_directory() && regex_match(path, regex(".*(h|hh|hxx)")))
                filePaths.push_back(path);
        }

        return filePaths;
    }
};
