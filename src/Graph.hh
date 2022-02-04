//
// Created by Davis on 1/26/2022.
//
#pragma once

#include "Node.hh"
#include "Edge.hh"
#include <vector>

template<class T>
class Graph {
public:
    Graph();

    void addNode(Node<T> node) {
        nodes.push_back(node);
    }

    void addNodes(std::vector<Node<T>> newNodes) {
        for (Node<T> node: newNodes) {
            addNode(node);
        }
    }

    void removeNode(Node<T> node) {
        remove(nodes.begin(), nodes.end(), node);
    }

    void addEdge(Edge<T> edge) {
        edges.push_back(edge);
    }

    void addEdges(std::vector<Edge<T>> newEdges) {
        for (Node<T> edge: newEdges) {
            addEdge(edge);
        }
    }

    void removeEdge(Node<Edge<T>> edge) {
        remove(edges.begin(), edges.end(), edge);
    }

    std::vector<Node<T>> getNodes() {
        return nodes;
    }

    std::vector<Edge<T>> getEdges() {
        return edges;
    }

private:
    std::vector<Node<T>> nodes;
    std::vector<Edge<T>> edges;
};
