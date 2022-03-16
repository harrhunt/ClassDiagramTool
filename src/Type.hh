///
/// \Authors Hunter
/// \file src/Type.hh
/// \note The header file for the Type class definition
///

#pragma once
#include <string>

/// Stores information about a class' method
/// Includes method name, return type, scope, and parameters

class Type {
public:
    Type();
    Type(std::string name);
    Type(std::string name, std::string namespaceName);
    Type(std::string name, std::string namespaceName, std::string collectionType);

    //Getters and setters
    std::string getName();
    void setName(std::string name);

    bool getIsCollection();
    void setIsCollection(bool isCollection);

    std::string getCollectionType();
    void setCollectionType(std::string collectionType);

    std::string getNamespaceName();
    void setNamespaceName(std::string namespaceName);

    std::string toString();

private:
    std::string name;
    bool isCollection;
    std::string collectionType;
    std::string namespaceName;
};