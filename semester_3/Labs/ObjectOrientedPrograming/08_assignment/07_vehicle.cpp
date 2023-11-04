#include <iostream>

using namespace std;

class Vehicle
{
protected:
    string name;
    int milage, price;
};

class Car: public Vehicle
{
protected:
    int cost, warranty, capacity;
    string fuel;
};

class Bike: public Vehicle
{
protected:
    int cylender, gears, tank;
    string colling, wheel;

};

class Audi: public Car
{
protected:
    string model;
public:
    void input(string n, int mage, int prc, int c, int w, int cap, string ful, string model)
    {
        name = n;
        milage = mage;
        price = prc;
        cost = c;
        warranty = w;
        capacity = cap;
        fuel = ful;
        this->model = model;
    }
    void show()
    {
        cout << endl << "Name : " << name << endl;
        cout << "Millage : " << milage << endl;
        cout << "Price : " << price << endl;
        cout << "Cost : " << cost << endl;
        cout << "Warranty : " << warranty << " years"<< endl;
        cout << "Capacity : " << capacity << endl;
        cout << "Fuel : " << fuel << endl;
        cout << "Model : " << model << endl;
    }
};
class Ford: public Car
{
protected:
    string model;
public:
    void input(string n, int mage, int prc, int c, int w, int cap, string ful)
    {
        name = n;
        milage = mage;
        price = prc;
        cost = c;
        warranty = w;
        capacity = cap;
        fuel = ful;
    }

    void show()
    {
        cout << endl << "Name : " << name << endl;
        cout << "Millage : " << milage << endl;
        cout << "Price : " << price << endl;
        cout << "Cost : " << cost << endl;
        cout << "Warranty : " << warranty << " years"<< endl;
        cout << "Capacity : " << capacity << endl;
        cout << "Fuel : " << fuel << endl;
        cout << "Model : " << model << endl;
    }
};

class Bajaj:public Bike
{
protected:
    string make_type;
public:
    void input(string nm, int mage, int prc,int cyl,int g, int t, string col, string w, string mke)
    {
        name = nm;
        milage = mage;
        price = prc;
        cylender = cyl;
        gears = g;
        tank = t;
        colling = col;
        wheel = w;
        make_type = mke;
    }

    void show()
    {
        cout << endl << "Name : " << name << endl;
        cout << "Millage : " << milage << endl;
        cout << "Price : " << price << endl;
        cout << "Cylender : " << cylender << endl;
        cout << "Gears : " << gears << " years"<< endl;
        cout << "Tanks : " << tank << endl;
        cout << "Colling system : " << colling << endl;
        cout << "Wheels type: " << wheel << endl;
        cout << "Make type : " << make_type << endl;
    }
};
class TVS:public Bike
{
protected:
    string make_type;
public:
    void input(string nm, int mage, int prc,int cyl,int g, int t, string col, string w, string mke)
    {
        name = nm;
        milage = mage;
        price = prc;
        cylender = cyl;
        gears = g;
        tank = t;
        colling = col;
        wheel = w;
        make_type = mke;
    }
    void show()
    {
        cout << endl << "Name : " << name << endl;
        cout << "Millage : " << milage << endl;
        cout << "Price : " << price << endl;
        cout << "Cylender : " << cylender << endl;
        cout << "Gears : " << gears << " years"<< endl;
        cout << "Tanks : " << tank << endl;
        cout << "Colling system : " << colling << endl;
        cout << "Wheels type: " << wheel << endl;
        cout << "Make type : " << make_type << endl;
    }
};


int main()
{
    TVS ob;
    Bajaj ob1;
    Audi ob2;
    Ford ob3;

    ob.input("Owner 1", 20, 20000, 4, 7, 2, "oil", "spokes", "make x");
    ob1.input("Owner 2", 30, 30000, 4, 6, 1, "liquid", "alloys", "make y");
    ob2.input("Owner 3", );
    ob3.input("Owner 3", 10, 20000, 12000, 2, 6, 40, "model b");

    ob.show();
    ob1.show();
    ob2.show();
    ob3.show();

    return 0;
}
