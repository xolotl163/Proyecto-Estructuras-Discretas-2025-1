
#pragma once

//general use librarys
#include <iostream>

//handmade librarys
#include "SubwayLine.h"
#include "TrainStation.h"
#include "Stack.h"

class Controller {

    protected:
        
        std::string idController;
        int controllerNumber;

        List *subwayLines;
        Stack *stack;

    public:

        //Constructors
        Controller();
        Controller(std::string idController, int controllerNumber, List *subwayLines, Stack *stack);
        
        //setters and getters
        std::string getIdController();
        int getControllerNumber();
        List* getSubwayLines();
        Stack* getStack();

        bool setIdController(std::string idController);
        bool setControllerNumber(int controllerNumber);
        bool setSubwayLines(List subwayLines);
        bool printController();
        bool setStack(Stack *stack);

        //Destructor
        ~Controller();

        //general methods to the class

};