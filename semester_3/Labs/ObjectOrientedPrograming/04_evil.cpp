#include <iostream>
#define MAX 16

using namespace std;

void bin(int[], int *, int);

int main()
{
    int b[MAX], n = 0, i, c = 0, a;
    cout << "Enter the number : " << endl;
    cin >> a;

    if (a <= 2 || a >= 100)
    {
        cout << "Out of range" << endl;
        return 0;
    }

    bin(b, &n, a);

    for (i = n - 1; i >= 0; i--)
    {
        //        cout << b[i] << endl;
        if (b[i] == 1)
            c++;
    }
    cout << c << endl;
    if (!(c % 2))
        cout << "This is evil number" << endl;
    else
        cout << "This is not evil number" << endl;

    return 0;
}

void bin(int b[], int *n, int a)
{
    while (a)
    {
        b[(*n)++] = a % 2;
        a /= 2;
    }
}
