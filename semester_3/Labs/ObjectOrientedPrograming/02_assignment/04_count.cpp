/*
 *  Author  :   Aakash Chauhan
 *  Date    :   August 19, 2023
 *
 *  Count the number of occurrence of each Character
 */

#include <iostream>

using namespace std;


int main()
{
    string str;
    int i, j, ln, c, f;

    cout << "Enter the string " << endl;
    getline(cin, str);
    ln =  str.length();

    for (i = 0; i < ln; i++)
    {
        c = 0;
        f = 1;
        for (j = i - 1; j >= 0; j--)
        {
            if (str.at(i) == str.at(j))
            {
                f = 0;
                break;
            }
        }
        if (f && str.at(i) != 32)
        {
            for (j = i; j < ln; j++)
            {
                if (str.at(i) == str.at(j))
                {
                    c++;
                }
            }
            cout << "Count of " << str.at(i) << " is " << c << endl;
        }
    }



    return 0;
}
