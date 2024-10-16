
//general use libraries
#include <iostream>

//handmade libraries
#include "../headers/Node.h"

/* Node class implementation */ 

//Constructors
Node::Node(){
    this->id = "<--- Node --->";
    this->next = nullptr;
    this->prev = nullptr;
}

Node::Node(std::string id, Node* next, Node* prev){
    this->id = id;
    this->next = next;
    this->prev = prev;
}

//setters and getters
std::string Node::getId(){return this->id;}
Node* Node::getNext(){return (this->next);}
Node* Node::getPrev(){return (this->prev);}

bool Node::setNext(Node *next){
    if (this->next = next){
        return true;
    }
    else{
        return false;
    }
}

bool Node::setPrev(Node* prev){ 
    if ( this->prev = prev ) 
        return true; 
    else 
        return false;
}

bool Node::setId(std::string id){
    this->id = id;
    return true;
}

bool Node::printNode(){

    if (this->next != nullptr){
        std::cout << "Node id: " << this->getId() << std::endl;
        return true;
    }
    else{
        std::cout << "Node id: nullptr" << std::endl;
        return false;
    }
}

//Destructor
Node::~Node(){
    //research how to delete an instatiated object
}

//general methods to the class