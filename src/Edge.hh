//
// Created by Davis on 1/26/2022.
//
#pragma once
#include "Node.hh"

template <class T>
class Edge {
public:
    enum Type {ASSOCIATION, AGGREGATION, COMPOSITION, INHERITANCE, IMPLEMENTATION};
    enum Multiplicity {ONE_TO_ONE, ONE_TO_MANY, MANY_TO_ONE, MANY_TO_MANY};

    Edge(Node<T> startNode, Node<T> endNode, Type type, Multiplicity multiplicity){
        this->startNode = startNode;
        this->endNode = endNode;
        this->type = type;
        this->multiplicity = multiplicity;
    }

    Node<T> getStartNode(){
        return startNode;
    }

    Node<T> getEndNode(){
        return endNode;
    }

    Type getType(){
        return type;
    }

    Multiplicity getMultiplicity(){
        return multiplicity;
    }

private:
    Node<T> startNode, endNode;
    Type type;
    Multiplicity multiplicity;
};