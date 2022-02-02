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
        vector<string> paths = FileManager::getFilePaths(srcDirectory);

        for (string path : paths){
            /*ClassParser parser(FileManager::readFile(path));
            //parser.parseClass();
            ClassInfo classInfo(parser.getName());
            //add fields and methods

            Node<ClassInfo> node(classInfo);
            graph.addNode(node);

            //add any relevant edges*/
        }

        return graph;
    }
};



