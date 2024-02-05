/*
    Name        :   Aakash
    Roll Number :   2021931
 */
#include <iostream>
using namespace std;

class Hotel
{
    // class Holet with member APQ.
private:
    int Rno, Tariff, NOD, amount;
    string name;
    int CALC()
    {
        // To calculate and return amount
        if (NOD*Tariff > 10000)
            return (1.05 * NOD * Tariff);
        return (NOD * Tariff);
    }
public:
    void checkin(int Rno, string name, int Tariff, int NOD)
    {
        // Function to enter the content Rno, Name, Tariff and NOD
        this->name = name;
        this->NOD = NOD;
        this->Rno = Rno;
        this->Tariff = Tariff;
    }
    void checkout()
    {
        // Function to display Rno, Name, Tariff,NOD and Amount
        cout << "CHECKOUT" << endl;
        cout << "Room   : " << Rno << endl;
        cout << "Name   : " << name << endl;
        cout << "Tariff : " << Tariff << endl;
        amount = CALC();
        cout << "Amount : " << amount;
    }
};

int main()
{
    // Local decleration of main
    Hotel ob;
    string Test_name;
    int nod, tariff, days, rno;

    // Input section
    cout << "   ***** INPUT *****" << endl;
    cout << "Enter the name: ";
    getline(cin, Test_name);
    cout << "Enter the number of days: ";
    cin >> nod;
    cout << "Enter the tariff: ";
    cin >> tariff;
    cout << "Enter the room number: ";
    cin >> rno;


    // Output section
    cout << endl << "   ***** OUTPUT *****" << endl;
    ob.checkin(rno,Test_name ,tariff,nod);
    ob.checkout();

    return 0;
}
