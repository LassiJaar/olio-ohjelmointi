#include <iostream>
#include "animal.h"
#include "dog.h"

using namespace std;

int main()
{
    Animal *elukka = new Animal;
    elukka->callOut();
    Dog* koira = new Dog;
    koira->callOut();

    delete elukka;
    elukka = nullptr;
    delete koira;
    koira = nullptr;

    return 0;
}
