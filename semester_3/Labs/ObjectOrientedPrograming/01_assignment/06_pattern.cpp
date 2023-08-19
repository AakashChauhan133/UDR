/*
 *  Author  :   Aakash Chauhan
 *  Date    :   August 12, 2023
 *  3 Patterns
 *________________
 *  1
 *  3 1
 *  5 3 1
 *  7 5 3 1
 *  9 7 5 3 1
 *________________
 *
 *  1 3 5 7 9
 *  3 5 7 9 1
 *  5 7 9 1 3
 *  7 9 1 3 5
 *  9 1 3 5 7
 *________________
 *
 *  1 2 3 4 5
 *  2 2 3 4 5
 *  3 3 3 4 5
 *  4 4 4 4 5
 *  5 5 5 5 5
 *_________________
 */

#include <iostream>

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

    return 0;
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
