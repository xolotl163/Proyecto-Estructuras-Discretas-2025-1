
#pragma once

//general use librarys
#include <iostream>

//handmade librarys
#include "Node.h"

class Stack : private Node {

    private:
    
        Node* top;
        int size;

    public:
            
        //Constructors
        Stack();
        Stack(Node* top, int size = 0);
        
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