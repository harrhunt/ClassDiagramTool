//
// Created by Davis on 1/26/2022.
//
#pragma once

template <class T>
class Node {
public:
    Node(T data){
        this->data = data;
    }

    T getData(){
        return data;
    }
    void setData(T data){
        this->data = data;
    }

private:
    T data;
};