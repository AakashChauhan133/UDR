/*
    Name        :   Aakash
    Roll Number :   2021931
 */

#include <iostream>
using namespace std;

class Friend
{
private:
    int x;
public:
    Friend(int x = 0)
    {
        this->x = x;
    }
    void show()
    {
        cout << "Value of x with frind: " << x << endl;
    }

    // Pre increment logic with friend
    friend Friend operator ++(Friend &);
    friend Friend operator --(Friend &);
    // Post increment logic with friend
    friend Friend operator ++(Friend &, int);
    friend Friend operator --(Friend &, int);
};

Friend operator ++(Friend &ob)
{
    Friend tob;
    (ob.x)++;
    tob.x = ob.x;

    return tob;
}
Friend operator --(Friend &ob)
{
    Friend tob;
    (ob.x)--;
    tob.x = ob.x;

    return tob;
}
Friend operator ++(Friend &ob, int)
{
    Friend tob;
    tob.x = ob.x;
    (ob.x)++;

    return tob;
}
Friend operator --(Friend &ob, int)
{
    Friend tob;
    tob.x = ob.x;

    (ob.x)--;
    return tob;
}
int main()
{
    // Local decleraion
    Friend ob1(2), ob2;
    cout << "Value in object 1: ";
    ob1.show();

    // Output section
    cout << "   ***** OUTPUT POST INC *****" << endl;
    ob2 = ob1++;
    ob1.show();
    ob2.show();
    cout << "   ***** OUTPUT POST DEC *****" << endl;
    ob2 = ob1--;
    ob1.show();
    ob2.show();
    cout << "   ***** OUTPUT PRE INC *****" << endl;
    ob2 = --ob1;
    ob1.show();
    ob2.show();
    cout << "   ***** OUTPUT PRE DEC *****" << endl;
    ob2 = --ob1;
    ob1.show();
    ob2.show();



    return 0;
}


