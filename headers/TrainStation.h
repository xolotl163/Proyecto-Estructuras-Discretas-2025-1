
#pragma once

//general use librarys
#include <iostream>

//handmade librarys
#include "Node.h"
#include "List.h"

class TrainsStation : private Node {

    private:
    
        std::string name;
        int stationNumber;
        List neighbors;

    public:
            
        //Constructors
        TrainsStation(std::string name, int stationNumber);
        TrainsStation(std::string name, int stationNumber, Node* next, Node* prev);
        
        //setters and getters
        std::string getName();
        int getStationNumber();
        List getNeighbors();
        
        bool setName(std::string name);
        bool setStationNumber(int stationNumber);
        bool printTrainsStation();
        bool setNeighbors(List neighbors);
        
        //Destructor
        ~TrainsStation();

        //general methods to the class
};