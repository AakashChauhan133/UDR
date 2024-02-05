#include <iostream>

using namespace std;

class NoFriend
{
private:
    int x;
public:
    NoFriend(int x = 0)
    {
        this->x = x;
    }
    void show()
    {
        cout << "Value of without frind x: " << x << endl;
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
    // Post increment logic with friend
    friend Friend operator ++(Friend &, int);
    friend Friend operator --(Friend &, int);
};

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
    cout << "Without friend" << endl;
    NoFriend ob1(2), ob2;
    ob2 = ob1++;
    ob1.show();
    ob2.show();


    cout << "With friend" << endl << endl;
    Friend ob3(2), ob4;
    ob4 = ob3++;
    ob3.show();
    ob4.show();

    return 0;
}

