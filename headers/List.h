
#pragma once

//general use librarys
#include <iostream>

//handmade librarys
#include "Node.h"

class List{

    protected:
        
        Node *head;
        Node *tail;
        int size;

    public:

        //Constructors
        List();
        List(Node *head, Node *tail);
        
        //setters and getters
        Node* getHead();
        Node* getTail();
        int getSize();
        
        bool setHead(Node* head);
        bool setTail(Node* tail);
        bool setSize(int size);
        bool printList();
        
        //Destructor
        ~List();

        //general methods to the class

};