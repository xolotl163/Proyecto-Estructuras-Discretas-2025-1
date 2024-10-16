
#pragma once

//general 
#include <iostream>

class Node {

    protected:
        
        std::string id;
        Node *next;
        Node *prev;

    public:

        //Constructors
        Node();
        Node(std::string id, Node* next, Node* prev);
        
        //setters and getters
        std::string getId();
        Node* getNext();
        Node* getPrev();
        
        bool setNext(Node* next);
        bool setPrev(Node* prev);
        bool setId(std::string id);
        bool printNode();
        
        //Destructor
        virtual ~Node();

        //general methods to the class

};