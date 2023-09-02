/*
 *  Author  :   Aakash Chauhan
 *  Date    :   August 19, 2023
 *  Input   :   He has good tables
 *              2 4
 *  Output  :   He ibt good ubcmft
 */

#include <iostream>

using namespace std;


int main()
{
    string str;
    int a, b, i, co, val,ln;

    cout << "Enter the string " << endl;
    getline(cin, str);
    ln =  str.length();
    cin >> a >> b;

    co = 1;

    for (i = 0; i < ln; i++)
    {
        if (str.at(i) == 32 && str.at(i + 1) != 32)
            co++;
        else if (co == a || co == b)
        {
            val = str.at(i);
            val = (val >= 97) ? ((val - 96) % 26)+ 97 : ((val - 64) % 26)+ 65;
            str[i] = val;
        }
    }

        cout << str;
    return 0;
}
