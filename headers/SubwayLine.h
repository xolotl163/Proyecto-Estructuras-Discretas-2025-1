
#pragma once

//general use librarys
#include <iostream>

//handmade librarys
#include "List.h"

class SubwayLine : private List {

    private:
    
        std::string name;
        int lineCode;

    public:
            
        //Constructors
        SubwayLine(std::string name, int lineCode);
        SubwayLine(std::string name, int lineCode, Node* head, Node* tail, int size);
        
        //setters and getters
        std::string getName();
        int getLineCode();
        
        bool setName(std::string name);
        bool setLineCode(int lineCode);
        bool printSubwayLine();
        
        //Destructor
        ~SubwayLine();

        //general methods to the class
};