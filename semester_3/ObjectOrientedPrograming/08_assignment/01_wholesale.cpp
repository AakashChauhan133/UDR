#include <iostream>

using namespace std;

class Product
{
protected:
    string name;
    int code;
    double amount;
public:
    Product(string n, int c, double p)
    {
        name = n;
        code = c;
        amount = p;
    }
    void show()
    {
        cout << "name   :   " << name << endl;
        cout << "code   :   " << code << endl;
        cout << "amount :   " << amount << endl;
    }
};

class Sales:public Product
{
protected:
    int day;
    double tax, totamt;
public:
    Sales(string a, int b, double c, int d) : Product(a, b, c)
    {
        day = d;
        tax = 0;
        totamt = 0;
    }
    void compute()
    {
        this->tax = 0.124 * amount;
        cout << "Service tax    :   " << tax << endl;
        if (day > 30)
        {
            cout << "fine       :   "  << 0.025 * tax << endl;
            tax += 0.025 * tax;
        }
        totamt = tax;
    }
    void show1()
    {
        cout << "name       :   " << name << endl;
        cout << "code       :   " << code << endl;
        cout << "amount     :   " << amount << endl;
        cout << "total amt  :   "  << totamt << endl;
    }

};

int main()
{
    Sales ob("test", 10, 100.0, 100);
//    ob.show();
    ob.compute();
    ob.show1();

    return 0;
}
