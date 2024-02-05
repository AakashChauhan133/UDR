/*
    Name        :   Aakash
    Roll Number :   2021931
 */

#include <iostream>

// Maximum size of array
#define MAX 10

using namespace std;

int main()
{
    // Local declaration of variables
    int n, i;
    string names[MAX];
    float units[MAX] = {0}, charges[MAX] = {0};

    // Input section
    cout << "   ***** INPUT *****" << endl;
    cout << "Enter the number of users: ";
    cin >> n;
    cout << endl;

    for (i = 0; i < n; i++)
    {
        cout << "Enter the name of user " << i + 1 << " : ";
        cin >> names[i];
        cout << "Enter the units consumed by " << names[i] << " : ";
        cin >> units[i];
        cout << endl;
    }
    for (i = 0; i < n; i++)
    {
        if (units[i] < 100)
        {
            charges[i] = units[i] * 0.60;
        }
        else if (units[i] >= 100 && units[i] < 300)
        {
            charges[i] = 60 + (units[i] - 100) * 0.80;
        }
        else if (units[i] >= 300)
        {
            charges[i] = 60 + 80 + (units[i] - 300) * 0.90;
        }
        if (charges[i] < 50)
            charges[i] = 50;
        if (charges[i] > 300)
            charges[i] = charges[i] + charges[i] * (0.15);
    }

    // Output section
    cout << "   ***** OUTPUT *****" << endl;
    for (i = 0; i < n; i++)
    {
        cout << "Units consumed by "<< names[i] << " is " << units[i] << " and charges are Rs." << charges[i] << endl;
    }

    return 0;
}
