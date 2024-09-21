
#pragma once

//general use librarys
#include <iostream>

//handmade librarys
#include "./headers/SubwayLine.h"

//Constructors
SubwayLine::SubwayLine(){
    this->name = "-- SubwayLine --";
    this->idSubwayLine = " <--- Default ID ---> ";
    this->lineCode = 0;
    this->terminalA = nullptr;
    this->terminalB = nullptr; 
}

SubwayLine::SubwayLine(std::string name, std::string idSubwayLine, int lineCode, TrainStation *terminalA, TrainStation *terminalB){
    this->name = name;
    this->idSubwayLine = idSubwayLine;
    this->lineCode = lineCode;
    this->terminalA = terminalA;
    this->terminalB = terminalB;
}

//setters and getters
std::string SubwayLine::getName(){
    return this->name;
}

std::string SubwayLine::getIdSubwayLine(){
    return this->idSubwayLine;
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
    if ( this != nullptr ){
        std::cout << "SubwayLine name: " << this->getName() << std::endl;
        std::cout << "SubwayLine ID: " << this->getIdSubwayLine() << std::endl;
        std::cout << "SubwayLine code: " << this->getLineCode() << std::endl;
        return true;
    }
    else{
        std::cout << "SubwayLine name: nullptr" << std::endl;
        std::cout << "SubwayLine ID: nullptr" << std::endl;
        std::cout << "SubwayLine code: nullptr" << std::endl;
        return false;
    }
}

//Destructor
SubwayLine::~SubwayLine(){}

//general methods to the class