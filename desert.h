#ifndef desert_H
#define desert_H
#include <string>
#include "menuItem.h"

using namespace std;

class desert : public menuItem{
    private:
        bool whippedCream;
    public:
        desert(string nm, bool wc);
};

#endif