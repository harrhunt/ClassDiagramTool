//
// Created by Davis on 1/26/2022.
// src/Edge.hh
//

#pragma once
#include "Node.hh"

/// Generic Edge class for the Graph data structure
/// Contains a startNode and endNode, as well as type and multiplicity
template<class T>
class Edge {
public:

    /// Describe the type of relationship between classes
    enum Type {
        ASSOCIATION, AGGREGATION, COMPOSITION, INHERITANCE, IMPLEMENTATION
    };
    /// Describe the multiplicity of the relationship between classes
    enum Multiplicity {
        ONE_TO_ONE, ONE_TO_MANY, MANY_TO_ONE, MANY_TO_MANY
    };

    Edge();
    Edge(Node<T> startNode, Node<T> endNode, Type type, Multiplicity multiplicity) {
        this->startNode = startNode;
        this->endNode = endNode;
        this->type = type;
        this->multiplicity = multiplicity;
    }

    //getters and setters
    Node<T> getStartNode() {
        return startNode;
    }
    void setStartNode(Node<T> startNode) {
        this->startNode = startNode;
    }

    Node<T> getEndNode() {
        return endNode;
    }
    void setEndNode(Node<T> endNode) {
        this->ndNode = endNode;
    }

    Type getType() {
        return type;
    }
    void setType(Type type) {
        this->type = type;
    }

    Multiplicity getMultiplicity() {
        return multiplicity;
    }
    void setMultiplicity(Multiplicity multiplicity) {
        this->multiplicity = multiplicity;
    }

private:
    Node<T> startNode, endNode;
    Type type;
    Multiplicity multiplicity;
};