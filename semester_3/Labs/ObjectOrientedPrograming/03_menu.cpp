#include <iostream>

using namespace std;

void isPrime();
void checkSmall();

int main()
{
    int ch = 1, choice;
    do
    {
        cout << "************MENU************" << endl;
        cout << "[1] Check for prime or composite" << endl;
        cout << "[2] Find smallest digit of a number" << endl;
        cout << "[3] exit" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            isPrime();
            break;
        case 2:
            checkSmall();
            break;
        case 3:
            ch = 0;
            break;
        default:
            cout << "Invalid Input" << endl;
        }
    }
    while (ch);
    return 0;
}

void isPrime()
{
    int a;
    int i, f = 0;
    cout << "Enter a number to check for prime" << endl;
    cin >> a;
    if (a == 1)
    {
        cout << "Neither prime nor composite" << endl;
        return;
    }
    for (i = 2; i <= a / 2; i++)
    {
        if (!(a % i))
        {
            f = 1;
            break;
        }
    }
    if (f)
    {
        cout << "Composite Number" << endl;
        return;
    }
    cout << "Prime number" << endl;
    return;
}
void checkSmall()
{
    int a, small, temp;
    cout << "Enter a number to check for small digit" << endl;
    cin >> a;
    temp = a;
    small = a % 10;
    a /= 10;
    while (a)
    {
        if (a % 10 < small)
            small = a % 10;
        a /= 10;
    }
    cout << "Smallest digit of " << temp << " is " << small << endl;
}
