//
// Created by Davis on 1/31/2022.
// src/GraphBuilder.hh
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
    /// \return The graph data structure contain nodes with class information
    static Graph<ClassInfo> build(std::string srcDirectory, bool recursive) {
        Graph<ClassInfo> graph;
        std::vector<std::string> paths = FileManager::getFilePaths(srcDirectory, recursive);

        int ID = 0;
        for (std::string path: paths) {
            std::string fileContents = FileManager::readFile(path);
            std::vector<ClassInfo> classInfos = ClassParser::parseClasses(fileContents);
            for (auto &classInfo: classInfos) {
                Node<ClassInfo> node(ID, classInfo);
                graph.addNode(node);

                ID++;
            }

            //add edges
        }

        return graph;
    }
};



