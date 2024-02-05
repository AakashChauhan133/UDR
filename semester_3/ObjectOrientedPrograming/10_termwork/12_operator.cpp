/*
    Name        :   Aakash
    Roll Number :   2021931
 */

#include <iostream>
using namespace std;

class NoFriend
{
    // Class APQ
private:
    int x;
public:
    NoFriend(int x = 0)
    {
        this->x = x;
    }
    void show()
    {
        cout << "Value of x: " << x << endl;
    }
    // Pre increment logic without friend
    NoFriend operator ++()
    {
        NoFriend ob;
        (this->x)++;
        ob.x = this->x;

        return ob;
    }
    // Pre decrement logic without friend
    NoFriend operator --()
    {
        NoFriend ob;
        (this->x)--;
        ob.x = this->x;

        return ob;
    }
    // Post increment logic without friend
    NoFriend operator ++(int)
    {
        NoFriend ob;
        ob.x = this->x;

        (this->x)++;

        return ob;
    }
    NoFriend operator --(int)
    {
        NoFriend ob;
        ob.x = this->x;

        (this->x)--;
        return ob;
    }
};


int main()
{
    // Local decleration
    NoFriend ob1(2), ob2;
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

