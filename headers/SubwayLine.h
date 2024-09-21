
#pragma once

//general use librarys
#include <iostream>

//handmade librarys
#include "List.h"
#include "TrainStation.h"

class SubwayLine : public Node{

    private:
    
        int lineCode;
        std::string name;
        std::string idSubwayLine;

        TrainStation *terminalA;
        TrainStation *terminalB;

    public:
            
        //Constructors
        SubwayLine();
        SubwayLine(std::string name, std::string idSubwayLine, int lineCode, TrainStation *terminalA, TrainStation *terminalB);
        
        //setters and getters
        std::string getName();
        int getLineCode();
        std::string getIdSubwayLine();
        TrainStation* getTerminalA();
        TrainStation* getTerminalB();
        
        bool setName(std::string name);
        bool setLineCode(int lineCode);
        bool printSubwayLine();
        
        //Destructor
        ~SubwayLine();

        //general methods to the class
};