#include "chef.h"

Chef::Chef(string _name) {
    name = _name;
    cout << "Chef " << name << " contructed." << endl;
}

Chef::~Chef(){
    cout << "Chef " << name << " destructed." << endl;
}

void Chef::makeSalad(){
    cout << "Chef " << name << " has made a salad!" << endl;
}

void Chef::makeSoup(){
    cout << "Chef " << name << " has made a soup!" << endl;
}
