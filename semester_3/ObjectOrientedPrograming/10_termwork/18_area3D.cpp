/*
    Name        :   Aakash
    Roll Number :   2021931
 */

#include <iostream>
#define pi 3.141598

using namespace std;

class CAL_AREA
{
protected:
    float dim1, dim2;
public:
    void getData(float a, float b)
    {
        dim1 = a;
        dim2 = b;
    }
    virtual void volume() = 0;
};

class Cone:public CAL_AREA
{
public:
    void volume()
    {
        cout << "Volume Cone: " << (1./3.) * pi * dim1 * dim1 * dim2 <<endl;
    }
};
class Hemisphere:public CAL_AREA
{
public:
    void volume()
    {
        cout << "Volume Hemisphere: " << (2./3.) * pi * dim1 * dim1 * dim1 << endl;
    }
};
class Cylinder:public CAL_AREA
{
public:
    void volume()
    {
        cout << "Volume Cylinder: " << pi * dim1 * dim1 * dim2 <<endl;
    }
};

int main()
{
    CAL_AREA *ptr;
    Cylinder cob;
    Hemisphere hob;
    Cone cone;

    float a, b;

    // Input
    cout << "******* INPUT *******" << endl;
    cout << "Enter the dimentions: ";
    cin >> a >> b;
    cob.getData(a, b);
    hob.getData(a, b);
    cone.getData(a, b);

    // OUTPUT
    cout << "******* OUTPUT ******" << endl;
    ptr = &cone;
    ptr->volume();
    ptr = &hob;
    ptr->volume();
    ptr = &cob;
    ptr->volume();


    return 0;
}
