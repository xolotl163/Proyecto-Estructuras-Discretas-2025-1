
#pragma once

//general use librarys
#include <iostream>

//handmade librarys
#include "Node.h"
#include "List.h"

class TrainStation : public Node{

    private:
    
        std::string name;
        int stationNumber;
        List *neighbors;
        bool visitedState;

    public:
            
        //Constructors
        TrainStation();
        TrainStation(std::string name, int stationNumber, Node *next, Node *prev, std::string id );
        
        //setters and getters
        std::string getName();
        int getStationNumber();
        List* getNeighbors();
        bool getVisitedState();
        
        bool setName(std::string name);
        bool setStationNumber(int stationNumber);
        bool printTrainsStation();
        bool setNeighbors(List *neighbors);
        bool setVisitedState(bool visitedState);
        
        //Destructor
        ~TrainStation();

        //general methods to the class
};