
#pragma once

//general use librarys
#include <iostream>

//handmade librarys
#include "./headers/Stack.h"

//Constructors
Stack::Stack(std::string id) : Node(id){
    this->top = nullptr;
    this->next = nullptr;
    this->prev = nullptr;
    this->size = 0;
}

Stack::Stack(std::string id, Node* top, int size = 0) : Node(id){
    this->top = top;
    this->next = nullptr;
    this->prev = nullptr;
    this->size = size;
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
    return true;
}

bool Stack::setSize(int size){
    this->size = size;
    return true;
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
