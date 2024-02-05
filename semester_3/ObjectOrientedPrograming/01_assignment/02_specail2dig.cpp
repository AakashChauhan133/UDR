/*
 *  Author  :   Aakash Chauhan
 *  Date    :   August 12, 2023
 *
 *  Special number
 *          : number = product of(each digit) + sum of (each digit)
 */

#include <iostream>

using namespace std;

bool check(int);

int main()
{
    int a;
    cout << "Enter number: " << endl;
    cin >> a;

    if (check(a))
    {
        cout << "Entered Number is special number" << endl;
    }
    else
    {
        cout << "Entered number is not special number" << endl;
    }

    return 0;
}
bool check(int a)
{
    int prod, sum, temp;
    if (a < 10 || a > 99)
    {
        cout << "Invalid Input" << endl;
        return false;
    }

    sum = a % 10 + a / 10;
    prod = (a % 10) * (a / 10);
    if (prod + sum == a)
        return true;
    return false;
}
