#include <iostream>

using namespace std;

class emp
{
private:
    string name;
    int pan;
    double tax,taxin;
public:
    void inputInfo(string name, int pan,int taxin)
    {
        emp::name = name;
        emp::pan = pan;
        emp::taxin = taxin;
    }
    void taxCalc()
    {
        /*
            income < 2,50,000                  No tax
            2,50,000 <= income < 3,00,000      10% of exceeding
            3,00,000 <= income < 4,00,000      Rs 5000 + 20 % of exceeding from previous
            income >= 4,00,000                 Rs 25000 + 30% of exceeding previous
        */
        if (taxin < 250000)
        {
            tax = 0;
        }
        else if (taxin < 300000)
        {
            tax = ((taxin - 250000.) * 10.) / 100.;
        }
        else if (taxin < 400000)
        {
            tax = ((taxin - 300000.) * 20.) / 100.;
            tax += 5000.;
        }
        else
        {
            tax = ((taxin - 400000.) * 30.) / 100.;
            tax += 25000.;
        }
    }
    void displayInfo()
    {
        cout << "Name           : " << name << endl;
        cout << "pan            : " << pan << endl;
        cout << "Taxableincome  : " << taxin << endl;
        cout << "Tax            : " << tax << endl;
    }
};



int main()
{
    emp e;
    int ch, taxin, pan;
    string name;

    cout << "Enter the name: ";
    getline(cin, name);
    cout << "Enter pan: ";
    cin >> pan;
    cout << "Enter income: ";
    cin >> taxin;

    e.inputInfo(name, pan, taxin);
    e.taxCalc();
    e.displayInfo();

    return 0;
}
