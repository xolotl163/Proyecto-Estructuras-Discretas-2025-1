
#pragma once

//general use librarys
#include <iostream>

//handmade librarys
#include "Node.h"

class Stack{

    private:
    
        Node* top;
        int size;
        std::string id;

    public:
            
        //Constructors
        Stack();
        Stack(std::string id, Node* top);
        
        //setters and getters
        Node* getTop();
        int getSize();
        
        bool setTop(Node* top);
        bool setSize(int size);
        bool printStack();
        
        //Destructor
        ~Stack();

        //general methods to the class

};