#ifndef menuItem_H
#define menuItem_H

using namespace std;

class menuItem{
    private:
        string name;
    public:
        menuItem(string nm);
        void setName(string nm);
        string getName();
        void print();
};

#endif