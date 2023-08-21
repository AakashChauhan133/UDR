/*
 *  Author  :   Aakash Chauhan
 *  Date    :   August 19, 2023
 *
 *  Input a sentence and two integers. These integers tell the word number and replace all the character of that word by its next character.
 *      Input   :   He has good tables.
                    2 4
 *      Output  :   He ibt good ubcmft
 */

#include <iostream>

using namespace std;


int main()
{
    string str;
    int a, b, i, co, val,ln;

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
            val = (val - 65) % 26 + 66;
            str[i] = val;
        }
    }

    cout << str;
    return 0;
}
