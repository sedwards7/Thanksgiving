#include "beverages.h"
#include <iostream>
#include <string>

using namespace std;

beverages::beverages(string nm, bool icee){
    name = nm;
    ice = icee;
}

void beverages::setName(string nm){
    name = nm;
}

string beverages::getName(){
    return name;
}

void beverages::wantIce(bool icee){
    ice = icee;
}

bool beverages::getIce(){
    return ice;
}

void beverages::print(){
    menuItem::print();
    cout << "ice = " << ice << endl;
}