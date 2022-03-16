#include "Type.hh"

Type::Type() {
    Type::name = "";
    Type::isCollection = false;
    Type::collectionType = "";
    Type::namespaceName = "";
}

Type::Type(std::string name) {
	Type::name = name;
    Type::isCollection = false;
    Type::collectionType = "";
    Type::namespaceName = "";
}

Type::Type(std::string name, std::string namespaceName) {
    Type::name = name;
    Type::isCollection = false;
    Type::collectionType = "";
    Type::namespaceName = namespaceName;
}

Type::Type(std::string name, std::string namespaceName, std::string collectionType) {
    Type::name = name;
    Type::isCollection = collectionType != "";
    Type::collectionType = collectionType;
    Type::namespaceName = namespaceName;
}

std::string Type::getName() {
    return name;
}
void Type::setName(std::string name) {
    Type::name = name;
}

bool Type::getIsCollection() {
    return isCollection;
}
void Type::setIsCollection(bool isCollection) {
    Type::isCollection = isCollection;
}

std::string Type::getCollectionType() {
    return collectionType;
}
void Type::setCollectionType(std::string collectionType) {
    Type::collectionType = collectionType;
}

std::string Type::getNamespaceName() {
    return collectionType;
}
void Type::setNamespaceName(std::string namespaceName) {
    Type::namespaceName = namespaceName;
}

std::string Type::toString() {
    return isCollection ? namespaceName + collectionType + "<" + name + ">" : namespaceName + name;
}
