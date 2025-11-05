#include <iostream>
#include "car.h"

using namespace std;

Car::Car(){

}

void Car::setBrand(string brandIn){
    brand = brandIn;
}

void Car::setModel(string modIn){
    model = modIn;
}

void Car::setYearModel(int yModIn){
    yearModel = yModIn;
}

void Car::printData(){
    cout << "--------------" << endl;
    cout << "Autosi tiedot: "<< endl;
    cout << "Merkki: " << brand << endl;
    cout << "Malli: " << model << endl;
    cout << "Vuosimalli: " << yearModel << endl;
    cout << "--------------" << endl;
}
