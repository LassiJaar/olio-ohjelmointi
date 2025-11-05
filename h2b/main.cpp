#include <iostream>
#include "car.h"
#include <vector>

using namespace std;

int main()
{
    vector<Car> carList;
    carList.emplace_back("Volvo", "V70", 1989);
    carList.emplace_back("Peugeot", "3008", 2025);
    carList.emplace_back("Volkswagen", "Polo", 2004);

    //toisen alkion tiedot
    carList[1].printData();

    // Kaikkien autojen tiedot
    for(int i = 0; i < carList.size(); i++){
        carList[i].printData();
    }

    return 0;
}
