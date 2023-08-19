/*
 *  Author  :   Aakash Chauhan
 *  Date    :   August 12, 2023
 *  2 Patterns
 *__________________
 *      1
 *     121
 *    12321
 *   1234321
 *  123454321
 *__________________
 *  A B C D E
 *  F G H I
 *  J K L
 *  M N
 *  O
 *__________________
 */

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

    return 0;
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
            cout << x ;
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
