#include <iostream>
#include "car.h"
#include "rectangle.h"
#include "student.h"
#include <stdlib.h>
#include <memory>


using namespace std;

int main()
{
    Car auto1;
    auto1.setBrand("Ferrari");
    auto1.setModel("Ralli");
    auto1.setYearModel(2000);
    auto1.printData();

    Rectangle *kulmio = new Rectangle;
    kulmio->setHeight(21.4);
    kulmio->setWidth(36.2);
    cout << "Kulmiosi pinta-ala on: " << kulmio->getArea() << endl;
    cout << "Kulmiosi ympärysmitta on: " << kulmio->getCircum() << endl << "--------------" << endl;
    delete kulmio;
    kulmio = nullptr;

    unique_ptr<Student> oppilas = make_unique<Student>();
    oppilas->setName("Pasi-Petteri");
    oppilas->setStudentNumber(3005);
    oppilas->setAverage(8.79);
    cout << "Oppilaan tiedot: "<< endl;
    cout << "Nimi: " << oppilas->getName() << endl;
    cout << "Oppilasnumero: " << oppilas->getStudentNumber() << endl;
    cout << "Keskiarvo: " << oppilas->getAverage()<< endl;

    return 0;
}
