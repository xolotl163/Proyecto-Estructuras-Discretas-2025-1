
//general use librarys
#include <iostream>

//handmade librarys
#include "../headers/Controller.h"

//Constructors
Controller::Controller(){
    this->idController = "<--- Controller --->";
    this->controllerNumber = 0;
    this->subwayLines = nullptr;
    this->stack = nullptr;
}

Controller::Controller(std::string idController, int controllerNumber, List *subwayLines, Stack *stack){
    this->idController = idController;
    this->controllerNumber = controllerNumber;
    this->subwayLines = subwayLines;
    this->stack = stack;
}

//setters and getters
std::string Controller::getIdController(){
    return this->idController;
}

int Controller::getControllerNumber(){
    return this->controllerNumber;
}

List* Controller::getSubwayLines(){
    return (this->subwayLines);
}

Stack* Controller::getStack(){
    return (this->stack);
}

bool Controller::setIdController(std::string idController){
    this->idController = idController;
    if (this->getIdController() != ""){
        return true;
    }else{
        return false;
    }
}

bool Controller::setControllerNumber(int controllerNumber){
    this->controllerNumber = controllerNumber;
    if (this->getControllerNumber() != 0){
        return true;
    }else{
        return false;
    }
}

bool Controller::setSubwayLines(List subwayLines){
    this->subwayLines = &subwayLines;
    if (this->getSubwayLines() != nullptr){
        return true;
    }else{
        return false;
    }
}

bool Controller::printController(){
    std::cout << "Controller: " << this->getIdController() << std::endl;
    std::cout << "Controller Number: " << this->getControllerNumber() << std::endl;
    std::cout << "Subway Lines: " << std::endl;
    
    SubwayLine *aux = dynamic_cast<SubwayLine*>(this->getSubwayLines()->getHead());
    do{
        aux->printSubwayLine();
        aux = dynamic_cast<SubwayLine*>(aux->getNext());
    }while(aux != nullptr);

    std::cout << "Stack: " << std::endl;
    this->stack->printStack();
    
    return true;
}

bool Controller::setStack(Stack *stack){
    this->stack = stack;
    if (this->getStack() != nullptr){
        return true;
    }else{
        return false;
    }
}

//Destructor
Controller::~Controller(){}

//general methods to the class
List* Controller::parseStacktoList(Stack *stack){
    List *list = new List();
    Node *aux = stack->getTop();
    while(aux != nullptr){
        list->addElement(aux);
        aux = aux->getNext();
    }
    return list;
}

List* Controller::findPath(TrainStation *start, TrainStation *end){

    //se verifica que los parametros no sean nullptr
    if (start == nullptr || end == nullptr){

        std::cout << "Error: start or end are nullptr" << std::endl;
        return nullptr;
    
    }

    //objetos necesarios para la busqueda
    List *path = new List();
    TrainStation *current = start;

    current->setVisitedState(true);
    List *neighbors = current->getNeighbors();
    Node *aux = neighbors->getHead();

    //se recorren los vecinos de la estacion actual
    while( aux != neighbors->getTail() ){

        if (dynamic_cast<TrainStation*>(aux)->getVisitedState() == false){

            if (dynamic_cast<TrainStation*>(aux) == end){
                path->addElement(dynamic_cast<TrainStation*>(aux));
                return path;
            
            }else{

                //se agrega la estacion actual a la lista de camino
                path->addElement(current);

                //se agrega el camino encontrado a la lista de camino utilizando a la estacion actual como inicio
                //se hace por recursividad
                List *foundPath = findPath(dynamic_cast<TrainStation*>(aux), end);

                //se verifica si se encontro un camino
                if (foundPath != nullptr){
                    //se agrega el camino encontrado a la lista de camino
                    path->addElement(foundPath->getHead());
                    return path;
                
                }
            
            }
        
        }
        //se avanza al siguiente vecino
        aux = aux->getNext();
    
    }
    //se marca la estacion actual como no visitada
    current->setVisitedState(false);
    return nullptr;
        
}