#pragma once
#include <fstream>
#include <string>
#include <vector>

<<<<<<< HEAD:src/FileIO.hh
class FileIO{
  private:
    std::string fileName;
    std::string fileValues;

  public:
    FileIO(std::string fileN);
    FileIO();
=======
class FileManager {
private:
//    std::string fileName;
//    std::string fileContent;

public:
//    FileManager(std::string fileName);
//    FileManager();
>>>>>>> 1f397c5 (renamed FileIO to FileManager):src/FileManager.hh

    //Getters
    std::string getFileValues() const {return fileValues;}
    std::string getFileName() const {return fileName;}

};
