
//general use librarys
#include <iostream>

//handmade librarys
#include "../headers/Node.h"
#include "../headers/List.h"

//Constructors

List::List(){
    this->head = nullptr;
    this->tail = nullptr;
    this->size = 0;
}

List::List(Node *head, Node *tail){
    this->head = head;
    this->tail = tail;
    this->size = 0;
}

//setters and getters
Node* List::getHead(){
    return (this->head);
}

Node* List::getTail(){
    return (this->tail);
}

int List::getSize(){
    return this->size;
}

bool List::setHead(Node *head){
    this->head = head;
    if(this->getHead() != nullptr)
        return true;
    else
        return false;
}

bool List::setTail(Node *tail){
    this->tail = tail;
    if (this->getTail() != nullptr)
        return true;
    else
        return false;
}

bool List::setSize(int size){
    this->size = size;
    if (this->getSize() != 0)
        return true;
    else
        return false;
}

bool List::printList(){
    Node *aux = this->getHead();
    while(aux != nullptr){
        aux->printNode();
        aux = aux->getNext();
    }
    return true;
}

//Destructor
List::~List(){}

//general methods to the class
bool List::addElement(Node *element){

    if(this->getHead() == nullptr){
        this->setHead(element);
        this->setTail(element);
        this->setSize(this->getSize() + 1);
        std::cout << "Element added" << std::endl;
        return true;
        
    }
    else{
        this->getTail()->setNext(element);
        element->setPrev(this->getTail());
        this->setTail(element);
        this->setSize(this->getSize() + 1);
        std::cout << "Element added" << std::endl;
        return true;
    }

    return false;
}