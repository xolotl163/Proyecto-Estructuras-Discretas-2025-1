
#pragma once

//general use librarys
#include <iostream>

//handmade librarys
#include "./headers/SubwayLine.h"

//Constructors
SubwayLine::SubwayLine(std::string name, int lineCode) : List(){
    this->name = name;
    this->lineCode = lineCode;
}

SubwayLine::SubwayLine(std::string name, int lineCode, Node* head, Node* tail, int size) : List(head, tail, size){
    this->name = name;
    this->lineCode = lineCode;
}

//setters and getters
std::string SubwayLine::getName(){
    return this->name;
}

int SubwayLine::getLineCode(){
    return this->lineCode;
}

bool SubwayLine::setName(std::string name){
    this->name = name;
    return true;
}

bool SubwayLine::setLineCode(int lineCode){
    this->lineCode = lineCode;
    return true;
}

bool SubwayLine::printSubwayLine(){
    Node* aux = this->getHead();
    while(aux != nullptr){
        aux->printNode();
        aux = aux->getNext();
    }
    return true;
}

//Destructor
SubwayLine::~SubwayLine(){}

//general methods to the class