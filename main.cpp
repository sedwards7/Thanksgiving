#include "menuItem.h"
#include "desert.h"
#include "sides.h"
#include "beverages.h"

#include <iostream>
#include <string>


using namespace std;

int main(){
    cout << "Menu:\n" << "  Entree:\n      Turkey" << endl;
    cout << "   Beverages:\n        1.Water\n     2.Soda" << endl;
    cout << "   Sides:\n        3.Stuffing\n      4.Taters\n        5.Beans" << endl;
    cout << "   Deserts:\n      6.Ice Cream\n     7.Pie\n       8.Jello" << endl;

    int amount;
    cout << "Everyones entree will be turkey. How many other items would you like to have?" << endl;
    cin >> amount;

    menuItem *p = new menuItem[amount];

    char ans;
    bool icee, wc;

    for (int i = 0; i < amount; i++){
        switch (choice)
        {
        case 1:
            
            cout << "Would you like ice? (y/n)" << endl;
            cin >> ans;
            if (ice == 'y')
                icee == true;
            else
                icee = false;
            
            p[i] = new beverages("Water", icee);
            break;
        case 2:
            cout << "Would you like ice? (y/n)" << endl;
            cin >> ans;
            if (ice == 'y')
                icee == true;
            else
                icee = false;
            
            p[i] = new beverages("Soda", icee);
            break;
        case 3:
            p[i] = new sides("Stuffing");
            break;
        case 4:
            p[i] = new beverages("Taters");
            break;
        case 5:
            p[i] = new beverages("Beans");
            break;
        case 6:
            cout << "Would you like whipped cream? (y/n)" << endl;
            cin >> ans;
            if (ice == 'y')
                wc == true;
            else
                wc = false;
            
            p[i] = new desert("Ice Cream", wc);
            break;
        case 7:
            cout << "Would you like whipped cream? (y/n)" << endl;
            cin >> ans;
            if (ice == 'y')
                wc == true;
            else
                wc = false;
            
            p[i] = new desert("Pie", wc);
            break;
        case 8:
            cout << "Would you like whipped cream? (y/n)" << endl;
            cin >> ans;
            if (ice == 'y')
                wc == true;
            else
                wc = false;
            
            p[i] = new desert("Jello", wc);
            break;
        }
        cout << "Your menu item has been added!" << endl;
    }

    for (int i = 0; i < amount; i++){
        p[i].print();
    }
    
}