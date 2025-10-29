#include <iomanip>
#include <iostream>

using namespace std;

void calcSum(int luku1, int luku2);
void calcDiv(int luku1, int luku2);
int retSum(int luku1, int luku2);
float retDiv(int luku1, int luku2);

int main()
{
    float a, b;
    cout << "Hei! :) Anna minulle luku A: ";
    cin >> a;
    cout << "Nyt haluaisin luvun B: ";
    cin >> b;

    calcSum(a,b);
    calcDiv(a,b);

    cout << "Taikojani teen... Kotia kohti meen.. palautettu summa on: " << retSum(a,b) << endl;

    try {
        float retOsm = retDiv(a,b);
        cout << "Taikoja laivoja.. Nukkumaan luppanaan... palautettu osamäärä on: " << retOsm << endl;
    } catch (runtime_error& e) {
        cout<<"Error: "<< e.what()<< endl;
    }

    return 0;
}

void calcSum(int luku1, int luku2)
{
    cout << "Simsalabim.... kambalabum...  lukujesi summa on: " << luku1+luku2 << endl;
}

void calcDiv(int luku1, int luku2)
{
    if(luku2 != 0){
        float osmr = float(luku1)/float(luku2);
        cout << "Miupeli Maupeli.. kisuli kasuli.... Lukujesi osamäärä on: " << fixed << setprecision(4) << osmr << endl;
    }
    else{
        cout << "Hupsu velhonpoikanen.. Et voi jakaa nollalla." << endl;
    }
}

int retSum(int luku1, int luku2)
{
    int summa = luku1+luku2;
    return summa;
}

float retDiv(int luku1, int luku2)
{
    float osmr;
    if(luku2 != 0){
        osmr = float(luku1)/float(luku2);
    }
    else{
        throw std::runtime_error("jakaja ei saa olla nolla!");
    }
    return osmr;
}

