//
// Created by Davis on 1/26/2022.
//
#pragma once

#include "Node.hh"
#include "Edge.hh"
#include <vector>
using namespace std;

template <class T>
class Graph {
public:
    Graph(){}
    void addNode(Node<T> node){
        nodes.push_back(node);
    }
    void removeNode(){}

    void addEdge(Edge<T> edge){
        edges.push_back(edge);
    }

    void removeEdge(){}

    vector<Node<T>> getNodes(){
        return nodes;
    }

    vector<Edge<T>> getEdges(){
        return edges;
    }

private:
    vector<Node<T>> nodes;
    vector<Edge<T>> edges;
};
