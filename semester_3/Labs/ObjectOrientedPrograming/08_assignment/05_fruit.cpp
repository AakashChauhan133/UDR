#include <iostream>

using namespace std;

class Fruit
{
protected:
    int total, apple, mango;
public:
    void input(int a, int m)
    {
        apple = a;
        mango = m;
        total = a + m;
    }
};
class Mango:public Fruit
{
public:
    void show()
    {
        cout << "mango: " << mango << endl;
    }
};
class Apple:public Fruit
{
public:
    void show()
    {
        cout << "apple: " << apple << endl;
    }
};

int main()
{
    Mango obm;
    Apple oba;
    obm.input(10, 20);
    oba.input(10, 20);

    obm.show();
    oba.show();

    return 0;
}
