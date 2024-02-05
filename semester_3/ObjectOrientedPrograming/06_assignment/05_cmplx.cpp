#include <iostream>

using namespace std;

class cmplx
{
private:
    int real, img;
public:
    cmplx(int a = 0, int b = 0)
    {
        real = a;
        img = b;
    }
    void show()
    {
        cout << "Value " << real << " + " << img << "i" << endl;
    }
    cmplx operator +(cmplx ob)
    {
        cmplx tob;
        tob.real = ob.real + real;
        tob.img  = ob.img + img;

        return tob;
    }

};
class cmplx2
{
private:
    int real, img;
public:
    cmplx2(int a = 0, int b = 0)
    {
        real = a;
        img = b;
    }
    void show()
    {
        cout << "Value " << real << " + " << img << "i" << endl;
    }
    friend cmplx2 operator +(cmplx2 , cmplx2);

};
cmplx2 operator +(cmplx2 ob, cmplx2 ob2)
{
    cmplx2 tob;
    tob.real = ob.real + ob2.real;
    tob.img  = ob.img + ob2.img;

    return tob;
}

int main()
{
    cmplx2 c1(1, 2), c2(2, -3), c3;
    c3 = c1 + c2;

    c3.show();

    return 0;
}
