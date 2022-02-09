//
// Created by Davis on 1/26/2022.
// src/Node.hh
//

#pragma once

/// Generic Node class for the Graph data structure
/// Stores data of any type
template<class T>
class Node {
public:
    Node(T data) {
        this->data = data;
    }

    //Getters and setters
    T getData() {
        return data;
    }
    void setData(T data) {
        this->data = data;
    }

private:
    T data;
};