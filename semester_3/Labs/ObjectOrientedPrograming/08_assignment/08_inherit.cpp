#include <iostream>

using namespace std;

class Base
{
private:
    int a;
protected:
    int b;
public:
    int c;
};

class Derived:public Base
{
public:
    void show()
    {
//        cout << a << endl; // Error
        cout << b << endl;
        cout << c << endl;
    }
};

int main()
{
    Derived ob;
    ob.show();

    return 0;
}
