/*
    Name        :   Aakash
    Roll Number :   2021931
 */

#include <iostream>
using namespace std;

class Shape
{
protected:
    double dim1, dim2;
public:
    void get_area(double dim1, double dim2)
    {
        this->dim1 = dim1;
        this->dim2 = dim2;
    }
    virtual void display_area()
    {
        cout << "No area" << endl;
    }
};

class Rectange:public Shape
{
protected:
    double area;
public:
    void display_area()
    {
        area = dim1 * dim2;
        cout << "area = " << area<< endl;
    }
};
class Triangle:public Shape
{
protected:
    double area;
public:
    void display_area()
    {
        area = 0.5 * dim1 * dim2;
        cout << "area = " << area << endl;
    }

};



int main()
{
    // Local dec
    Shape *ob;
    Triangle tob;
    Rectange rob;
    double a, b;

    // Input
    cout << "******* INPUT *******" << endl;
    cout << "Enter the dimentions: ";
    cin >> a >> b;
    rob.get_area(a, b);
    tob.get_area(a, b);

    // OUTPUT
    cout << "******* OUTPUT ******" << endl;
    ob = &tob;
    ob->display_area();

    ob = &rob;
    ob->display_area();


    return 0;
}
