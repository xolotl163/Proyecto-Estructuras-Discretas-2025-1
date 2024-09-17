
#pragma once

//general use librarys
#include <iostream>

//handmade librarys
#include "./headers/Controller.h"


//Constructors
Controller::Controller(std::string idController, int controllerNumber){
    this->idController = idController;
    this->controllerNumber = controllerNumber;
    this->subwayLines = new List();
    this->stack = new Stack("0");
}

Controller::Controller(std::string idController, int controllerNumber, List *subwayLines, Stack *stack){
    this->idController = idController;
    this->controllerNumber = controllerNumber;
    this->subwayLines = subwayLines;
    this->stack = stack;
}

//setters and getters
std::string Controller::getIdController(){
    return this->idController;
}

int Controller::getControllerNumber(){
    return this->controllerNumber;
}

List Controller::getSubwayLines(){
    return *(this->subwayLines);
}

Stack Controller::getStack(){
    return *(this->stack);
}

bool Controller::setIdController(std::string idController){
    this->idController = idController;
    return true;
}

bool Controller::setControllerNumber(int controllerNumber){
    this->controllerNumber = controllerNumber;
    return true;
}

bool Controller::setSubwayLines(List subwayLines){
    this->subwayLines = &subwayLines;
    return true;
}

bool Controller::printController(){
    std::cout << "Controller: " << this->getIdController() << std::endl;
    std::cout << "Controller Number: " << this->getControllerNumber() << std::endl;
    std::cout << "Subway Lines: " << std::endl;
    this->subwayLines->printList();
    std::cout << "Stack: " << std::endl;
    this->stack->printStack();
    return true;
}

bool Controller::setStack(Stack stack){
    this->stack = &stack;
    return true;
}

//Destructor
Controller::~Controller(){}

//general methods to the class