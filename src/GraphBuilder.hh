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

class GraphBuilder {
public:
    static Graph<ClassInfo> build(string srcDirectory){
        Graph<ClassInfo> graph;
        std::vector<string> paths = FileManager::getFilePaths(srcDirectory);

        for (string path : paths){
            std::vector<ClassInfo> classInfos = ClassParser::parseClasses(path);
            for (auto &classInfo : classInfos){
                Node<ClassInfo> node(classInfo);
                graph.addNode(node);
            }

            //add edges
        }

        return graph;
    }
};



