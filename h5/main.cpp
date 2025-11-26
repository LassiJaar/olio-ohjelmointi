#include <iostream>
#include "classb.h"
#include "classa1.h"
#include "classa2.h"

using namespace std;

int main()
{
//Osoitin tehtävät
    int a = 5;
    cout << "Muuttujan a arvo on " << a << " ja osoite on " << &a << endl;
    int *pointerA = &a;
    cout << "Pointterin osoittama osoite on: " << pointerA << endl;
    cout << "Pointterin osoittaman muistipaikan arvo on: " << *pointerA << endl;

//Referenssi tehtävät
    int &refA = a;
    cout << "refA osoittaa osoitteeseen: " << &refA << endl;
    cout << "refA:n osoittaman muistipaikan arvo on : " << refA << endl;
    int b = 6;
    //Referenssin osoitetta ei voi muuttaa määrittelyn jälkeen.
    //Pointterin osoitteen muuttaminen tapahtuisi lauseella: pointerA = &b;
    //pointerA palauttaa pointterin osoittaman osoitteen, kun taas *pointerA palauttaa muistipaikan arvon.
    //refA taas palauttaa muistipaikan arvon ja &refA palauttaa muistipaikan osoitteen. (Samoin kuin a ja &a)

//Olio arg tehtävät
    ClassB objB;
    objB.setInfo("Olion B asettama info");

    ClassA1 objA1(objB);
    objA1.setBinfo("Olion objA1 asettama info");

    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objA1: "<<objA1.getBinfo()<<endl;

//Referenssi arg tehtävät
    ClassB &refB=objB;
    ClassA2 objA2(refB);
    objA2.setBinfo("Olion Agr asettama info");
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objA2 "<<objA2.getBinfo()<<endl;
    cout<<endl;

    return 0;
}
