/*
    Name        :   Aakash
    Roll Number :   2021931
 */

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
    cmplx operator -(cmplx ob)
    {
        cmplx tob;
        tob.real = ob.real - real;
        tob.img  = ob.img - img;

        return tob;
    }
    friend void operator ==(cmplx, cmplx );

};
void operator ==(cmplx ob, cmplx ob2)
{
    cmplx tob;
    if (ob.real == ob2.real && ob.img == ob2.img)
    {
        cout << "Same complex numbers" << endl;
    }
    else
    {
        cout << "Diffrent complex numbers" << endl;
    }
}


int main()
{
    // Local decleration
    cmplx c1(1, 2), c2(2, -3), c3;
    cout << "Complex1: ";
    c1.show();
    cout << "Complex2: ";
    c2.show();

    // Add operaor
    cout << endl << "Addition using +" << endl;
    c3 = c1 + c2;
    c3.show();

    // subtration
    cout << endl << "Subtraction using -" << endl;
    c3 = c1 - c2;
    c3.show();

    // comparison
    cout << endl<< "Comparison using ==" << endl;
    c1 == c2;

    return 0;
}

