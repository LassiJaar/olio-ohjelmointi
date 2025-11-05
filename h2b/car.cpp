#include "car.h"
#include <iostream>

using namespace std;

Car::Car(string br, string mod, int yMod) {
    brand = br;
    model = mod;
    yearModel = yMod;
}

void Car::printData(){
    cout << "Merkki: " << brand << endl;
    cout << "Malli: " << model << endl;
    cout << "Vuosimalli: " << yearModel << endl << endl;
}
