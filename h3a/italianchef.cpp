#include "italianchef.h"

ItalianChef::ItalianChef(string italName) : Chef(italName) {
    cout << "Italian Chef " << name << " constructed." << endl;
}

ItalianChef::~ItalianChef(){
    cout << "Italian Chef " << name << " destructed." << endl;
}

void ItalianChef::makePasta(){
    cout << "Italian Chef " << name<< " made pasta!" << endl;
}

string ItalianChef::getName(){
    return name;
}
