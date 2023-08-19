#include <iostream>
#define MAX 10

using namespace std;

void pattern1(int);
void pattern2(int);
void pattern3(int);

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    pattern3(n);
}

void pattern1(int n)
{
    int i, j, val;
    for (i = 0; i < n; i++)
    {
        val = 2 * (i) + 1;
        for (j = 0; j < i + 1; j++)
        {
            cout << val << ' ';
            val -= 2;
        }
        cout << endl;
    }
}

void pattern2(int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << (2 * i + 1 + (2 * j)) % (2 * n) << " ";
        }
        cout << endl;
    }
}

void pattern3(int n)
{
    int i, j;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cout << ((i < j) ? j : i) << " ";
        }
        cout << endl;
    }

}
