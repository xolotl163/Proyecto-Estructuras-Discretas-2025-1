
#pragma once

//general use librarys
#include <iostream>

//handmade librarys
#include "./headers/Stack.h"

//Constructors
Stack::Stack(){
    this->id = "<--- Stack --->";
    this->top = nullptr;
    this->size = 0;
}

Stack::Stack(std::string id, Node* top){
    this->id = id;
    this->top = top;
    this->size = 0;
}

//setters and getters
Node* Stack::getTop(){
    return this->top;
}

int Stack::getSize(){
    return this->size;
}

bool Stack::setTop(Node* top){
    this->top = top;
    if(this->getTop() != nullptr){
        return true;
    }else{
        return false;
    }
}

bool Stack::setSize(int size){
    this->size = size;
    if(this->getSize() != 0){
        return true;
    }else{
        return false;
    }
}

bool Stack::printStack(){
    Node* aux = this->top;
    while(aux != nullptr){
        aux->printNode();
        aux = aux->getNext();
    }
    return true;
}

//Destructor
Stack::~Stack(){}
//general methods to the class
