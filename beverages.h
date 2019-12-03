#ifndef beverages_H
#define beverages_H

#include "menuItem.h"
#include <string>
usign namespace std;

class beverages : public menuItem{
    private:
        
        bool ice;
    
    public:
        beverages(string nm, bool icee);
        
        void wantIce(bool icee);
        bool getIce();
        void print();
};

#endif