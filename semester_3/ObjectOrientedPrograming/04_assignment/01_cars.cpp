/*
 *  Author  :   Aakash Chauhan
 *  Date    :   September 2, 2023
 *  Toolboth
 *      paying car      => incriment 1 car with charge 0.5
 *      nonpaying car   =>  incriment 1 car with no charge
 */

#include <iostream>
using namespace std;

class tollBooth
{
private:
    int cars;
    double collection;
public:
    tollBooth ()
    {
        cars = 0;
        collection = 0;
    }
    void payingCar()
    {
        cars++;
        collection += 0.5;
    }
    void nonPayingCar()
    {
        cars++;
    }
    void display()
    {
        cout << "   Total number of cars        :   " << cars << endl;
        cout << "   Total number of collection  :   " << collection << endl;
    }
};



int main()
{
    tollBooth toll;
    char ch;

    while (1)
    {
        cout << "********* Toll Booth *********" << endl;
        cout << "key [p] for paying car" << endl;
        cout << "key [n] for nonpaying car" << endl;
        cout << "key [d] To display" << endl;
        cout << "key [e] To exit" << endl;
        cin >> ch;

        switch (ch)
        {
        case 'p':
            toll.payingCar();
            break;
        case 'n':
            toll.nonPayingCar();
            break;
        case 'd':
            toll.display();
            break;
        case 'e':
            toll.display();
            exit(0);
        default:
            cout << "Invalid" << endl;
        }
    }



    return 0;
}





