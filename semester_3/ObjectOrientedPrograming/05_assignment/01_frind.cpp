/*
 *  Author  :   Aakash Chauhan
 *  Date    :   September 16, 2023
 *  basic friend function
 */


#include <iostream>

using namespace std;

class classx
{
private:
    int n1, n2, n3;
public:
    void setVal(int n1, int n2, int n3)
    {
        this->n1 = n1;
        this->n2 = n2;
        this->n3 = n3;
    }
    friend void biggest(classx ob);
};

void biggest(classx ob)
{
    if (ob.n1 > ob.n2 && ob.n1 > ob.n3)
        cout << ob.n1 << " is greatest." << endl;
    else if (ob.n2 > ob.n3 && ob.n2 > ob.n1)
        cout << ob.n2 << " is the greatest." << endl;
    else
        cout << ob.n3 << " is the greatest." << endl;
}

int main()
{
    classx ob;
    ob.setVal(3, 4, 3);

    biggest(ob);

    return 0;
}
