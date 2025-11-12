#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    Chef kokki1("Gordon Ramsay");
    kokki1.makeSalad();
    kokki1.makeSoup();

    ItalianChef itali("Anthony Bourdain");
    itali.makeSalad();
    itali.makeSoup();
    itali.makePasta();
    cout << "Name of the Italian Chef is " << itali.getName() << endl;

    return 0;
}
