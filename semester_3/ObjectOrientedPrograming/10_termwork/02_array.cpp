/*
    Name        :   Aakash
    Roll Number :   2021931
 */

#include <iostream>
#define     MAX     10
using namespace std;

int main()
{
    // Local decleratin
    int a[MAX];
    int n, i, temp;

    // Input section
    cout << "   ***** INPUT *****" << endl;
    cout << "Enter the size of array: ";
    cin >> n;
    cout << endl;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // Logic by swaping adjacent if condition is not followed
    for (i = 0; i < n - 1; i++)
    {
        if (i%2 && a[i] < a[i + 1])
        {
            temp = a[i];
            a[i] = a[i + 1];
            a[i + 1] = temp;
        }
        else if (!(i%2) && a[i] > a[i + 1])
        {
            temp = a[i];
            a[i] = a[i + 1];
            a[i + 1] = temp;
        }
    }

    // Output section
    cout << "   ***** OUTPUT *****" << endl;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
