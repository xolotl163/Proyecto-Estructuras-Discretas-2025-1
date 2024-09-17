
#pragma once

//general use librarys
#include <iostream>

//handmade librarys
#include "./headers/TrainStation.h"

/* TrainStation class implementation */

//Constructors
TrainsStation::TrainsStation(std::string name, int stationNumber) : Node(name){

    this->name = name;
    this->stationNumber = stationNumber;
    this->neighbors = new List();
}

TrainsStation::TrainsStation(std::string name, int stationNumber, Node* next, Node* prev ) : Node(name, next, prev){
    this->name = name;
    this->stationNumber = stationNumber;
    this->neighbors = new List();
}

//setters and getters
std::string TrainsStation::getName(){return this->name;}
int TrainsStation::getStationNumber(){return this->stationNumber;}
List  TrainsStation::getNeighbors(){return *(this->neighbors);}

bool TrainsStation::setName(std::string name){
    this->name = name;
    return true;
}

bool TrainsStation::setStationNumber(int stationNumber){
    if (this->stationNumber = stationNumber){
        return true;
    }
    else{
        return false;
    }
}

bool TrainsStation::printTrainsStation(){
    if (this->next != nullptr){
        std::cout << "Next node id: " << this->next->getId() << std::endl;
        return true;
    }
    else{
        std::cout << "Next node id: nullptr" << std::endl;
        return false;
    }
}

bool TrainsStation::setNeighbors(List *neighbors){
    this->neighbors = neighbors;
    return true;
}

//Destructor
TrainsStation::~TrainsStation(){}

//general methods to the class
