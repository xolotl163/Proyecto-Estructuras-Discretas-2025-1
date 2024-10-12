
//general use librarys
#include <iostream>

//handmade librarys
#include "../headers/TrainStation.h"

/* TrainStation class implementation */

//Constructors
TrainStation::TrainStation() : Node(){

    this->name = "<--- TrainStation --->";
    this->stationNumber = -1;
    this->neighbors = new List();
    this->visitedState = false;

    std::cout << "Trainstation created" << std::endl ;

}

TrainStation::TrainStation(std::string name, int stationNumber, Node *next, Node *prev, std::string id) : Node( id, next, prev ){
    this->name = name;
    this->stationNumber = stationNumber;
    this->neighbors = new List();
    this->visitedState = false;

    std::cout << "Trainstation created " << name << std::endl ;

}

//setters and getters
std::string TrainStation::getName(){return this->name;}
int TrainStation::getStationNumber(){return this->stationNumber;}
List*  TrainStation::getNeighbors(){return (this->neighbors);}
bool TrainStation::getVisitedState(){return this->visitedState;}

bool TrainStation::setName(std::string name){
    this->name = name;
    if(this->getName() != ""){
        return true;
    }else{
     return false;
    }
}

bool TrainStation::setStationNumber(int stationNumber){
    this->stationNumber = stationNumber;
    if (this->getStationNumber() != -1){
        return true;
    }else{
        return false;
    }
}

bool TrainStation::printTrainsStation(){
    if ( this != nullptr ){
        std::cout << "Station name: " << this->getName() << std::endl;
        std::cout << "Station number: " << this->getStationNumber() << std::endl;
        return true;
    }
    else{
        std::cout << "Station name: nullptr" << std::endl;
        std::cout << "Station number: nullptr" << std::endl;
        return false;

    }
}

bool TrainStation::setNeighbors(List *neighbors){
    this->neighbors = neighbors;
    if (this->getNeighbors() != nullptr){
        return true;
    }
    else{
        return false;
    }
}

bool TrainStation::setVisitedState(bool visitedState){
    this->visitedState = visitedState;
    if (this->getVisitedState() == visitedState){
        return true;
    }else{
        return false;
    }
}

//Destructor
TrainStation::~TrainStation(){}

//general methods to the class
