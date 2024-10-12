
/* general use librarys */
#include <iostream>

/* header files, they are in the same folder */
#include "./headers/Controller.h"
#include "./headers/List.h"
#include "./headers/Node.h"
#include "./headers/Stack.h"
#include "./headers/SubwayLine.h"
#include "./headers/TrainStation.h"

int main(){

    /* creation of objects */
    TrainStation* A1 = new TrainStation( "A1", 1, nullptr, nullptr, "A1" );
    TrainStation* A2 = new TrainStation( "A2", 2, nullptr, nullptr, "A2" );
    TrainStation* A4 = new TrainStation( "A4", 4, nullptr, nullptr, "A4" );
    TrainStation* A5 = new TrainStation( "A6", 5, nullptr, nullptr, "A5" );

    TrainStation* B1 = new TrainStation( "B1", 1, nullptr, nullptr, "B1" );
    TrainStation* B2 = new TrainStation( "B2", 2, nullptr, nullptr, "B2" );
    TrainStation* B4 = new TrainStation( "B4", 4, nullptr, nullptr, "B4" );
    TrainStation* B5 = new TrainStation( "B6", 5, nullptr, nullptr, "B5" );

    TrainStation* Z1 = new TrainStation( "Z1", 1, nullptr, nullptr, "Z1" );

    SubwayLine* L1 = new SubwayLine( "Linea 1", "L01", 1, A1, A5 );
    SubwayLine* L2 = new SubwayLine( "Linea 2", "L02", 1, B1, B5 );

    Stack* stack00 = new Stack();
    List* subwayLines00 = new List( L1, L2 );
    Controller* controller00 = new Controller( "C01", 1, subwayLines00, stack00 );

    /* neighbors adding */
    A1->getNeighbors()->addElement( A2 );
    A2->getNeighbors()->addElement( A1 );
    A2->getNeighbors()->addElement( Z1 );
    Z1->getNeighbors()->addElement( A2 ); // Z1 es una estación de transbordo
    Z1->getNeighbors()->addElement( A4 ); // Z1 es una estación de transbordo
    A4->getNeighbors()->addElement( Z1 );
    A4->getNeighbors()->addElement( A5 );

    B1->getNeighbors()->addElement( B2 );
    B2->getNeighbors()->addElement( B1 );
    B2->getNeighbors()->addElement( Z1 );
    Z1->getNeighbors()->addElement( B2 ); // Z1 es una estacion de transbordo
    Z1->getNeighbors()->addElement( B4 ); // Z1 es una estacion de transbordo
    B4->getNeighbors()->addElement( Z1 );
    B4->getNeighbors()->addElement( B5 );


return 0;
}