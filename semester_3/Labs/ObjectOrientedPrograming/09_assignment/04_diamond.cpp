/*
    Date:   November 18, 2023
 */

#include <iostream>

using namespace std;

class A
{
protected:
    int a;
};
class B:virtual public A
{
protected:
    int b;
};
class C:virtual public A
{
protected:
    int c;
};
class D:public B, public C
{
protected:
    int d;
public:
    void input(int w, int x, int y, int z)
    {
        a = w, b = x, c = y, d = z;
    }
    void show()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
        cout << "c = " << c << endl;
        cout << "d = " << d << endl;
    }
};

int main()
{
    D ob;
    ob.input(1, 2, 3, 4);
    ob.show();
    return 0;
}
