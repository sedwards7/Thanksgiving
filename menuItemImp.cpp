#include "menuItem.h"

#include <iostream>
#include <string>

using namespace std;

menuItem::menuItem(string nm){
    name = nm;
}

void menuItem::setName(string nm){
    name = nm;
}

string menuItem::getName(){
    return name;
}

void menuItem::print(){
    cout << "Menu Item: " << name;
    cout << flush;
}