
#pragma once

//general use librarys
#include <iostream>

//handmade librarys
#include "Node.h"
#include "List.h"

class TrainStation {

    private:
    
        std::string name;
        int stationNumber;
        List *neighbors;

    public:
            
        //Constructors
        TrainStation();
        TrainStation(std::string name, int stationNumber);
        
        //setters and getters
        std::string getName();
        int getStationNumber();
        List* getNeighbors();
        
        bool setName(std::string name);
        bool setStationNumber(int stationNumber);
        bool printTrainsStation();
        bool setNeighbors(List *neighbors);
        
        //Destructor
        ~TrainStation();

        //general methods to the class
};