#include "animal.h"

Animal::Animal() {}
Animal::~Animal(){
    cout << "Eläin tuhottu." << endl;
}

void Animal::callOut(){
    cout << "Eläin ääntelee." << endl;
}

