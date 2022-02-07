//
// Created by Davis on 1/31/2022.
//
#pragma once
#include "Graph.hh"
#include "ClassInfo.hh"
#include "FileManager.hh"
#include "ClassParser.hh"
#include <string>
#include <vector>

/// Builds the graph data structure for the class diagram
/// Contains only a static build method

class GraphBuilder {
public:

    /// Given a directory for the source files of a project, creates a Graph and adds Nodes and
    /// Edges to represent class diagram
    /// \param srcDirectory The path to the c++ project's source directory
    static Graph<ClassInfo> build(std::string srcDirectory) {
        Graph<ClassInfo> graph;
        std::vector<std::string> paths = FileManager::getFilePaths(srcDirectory);

        for (std::string path: paths) {
            std::vector<ClassInfo> classInfos = ClassParser::parseClasses(path);
            for (auto &classInfo: classInfos) {
                Node<ClassInfo> node(classInfo);
                graph.addNode(node);
            }

            //add edges
        }

        return graph;
    }
};



