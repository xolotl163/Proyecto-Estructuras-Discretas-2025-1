
#pragma once

//general use librarys
#include <iostream>

//handmade librarys
#include "./headers/List.h"

//Constructors
List::List(){
    this->head = nullptr;
    this->tail = nullptr;
    this->size = 0;
}

List::List(Node* head, Node* tail, int size){
    this->head = head;
    this->tail = tail;
    this->size = size;
}

//setters and getters
Node* List::getHead(){
    return this->head;
}

Node* List::getTail(){
    return this->tail;
}

int List::getSize(){
    return this->size;
}

bool List::setHead(Node* head){
    this->head = head;
    return true;
}

bool List::setTail(Node* tail){
    this->tail = tail;
    return true;
}

bool List::setSize(int size){
    this->size = size;
    return true;
}

bool List::printList(){
    Node* aux = this->head;
    while(aux != nullptr){
        aux->printNode();
        aux = aux->getNext();
    }
    return true;
}

//Destructor
List::~List(){}
//general methods to the class