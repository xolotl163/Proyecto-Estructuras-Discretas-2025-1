
//general use librarys
#include <iostream>

//handmade librarys
#include "../headers/Stack.h"

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
bool Stack::push(Node* element){
    if (element != nullptr){
        element->setNext(this->top);
        this->top = element;
        this->size++;
        return true;
    }else{
        return false;
    }
}

Node* Stack::pop(){
    if (this->top != nullptr){
        Node* aux = this->top;
        this->top = this->top->getNext();
        this->size--;
        return aux;
    }else{
        return nullptr;
    }
}

bool Stack::isEmpty(){
    if (this->top == nullptr){
        return true;
    }else{
        return false;
    }
}