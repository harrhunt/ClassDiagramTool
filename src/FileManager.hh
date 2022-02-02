#pragma once

#include <fstream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

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


        return filePaths;
    }
};
