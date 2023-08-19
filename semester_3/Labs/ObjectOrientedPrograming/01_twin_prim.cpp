#include <iostream>

using namespace std;

int isPrime(int);

int main()
{
    int a, b, f1, f2;
    f1 = f2 = 0;
    cout << "Enter two numbers: " << endl;
    cin >> a >> b;

    f1 = isPrime(a);
    f2 = isPrime(b);

    if (f1 && f2)
    {
        if ((a - b == 2 || b - a == 2))
        {
            cout << endl;
            cout << a << ", " << b << " are twin prime numbers " << endl;
        }
        else
        {
            cout << endl
                 << "Not twin prime number" << endl;
        }
    }

    return 0;
}

int isPrime(int a)
{
    int i, f = 0;
    for (i = 2; i <= a / 2; i++)
    {
        if (!(a % i))
        {
            f = 1;
            break;
        }
    }
    if (f || a == 1)
    {
        printf("not prime");
        return 0;
    }
    return 1;
}
