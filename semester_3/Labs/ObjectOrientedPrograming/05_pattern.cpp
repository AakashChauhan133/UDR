#include <iostream>

using namespace std;

void pattern1(int);
void pattern2(int);

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    pattern2(n);
}

void pattern1(int n)
{

    int i, j;
    for (i = 0; i < n; i++)
    {
        int x = 1, f = 1;
        for (int s = 0; s < n - i - 1; s++)
            cout << " ";
        for (j = -2; j < 2 * i - 1; j++)
        {
            cout << x;
            if (f <= i)
                x++, f++;
            else
                x--;
        }
        cout << endl;
    }
}

void pattern2(int n)
{
    int i;
    char ch = 'A';
    for (i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << ch << ' ';
            ch++;
        }
        cout << endl;
    }
}
