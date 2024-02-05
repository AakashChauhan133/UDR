/*
 *  Author  :   Aakash Chauhan
 *  Date    :   August 19, 2023
 *  Rearrange the string in order =>    digit up_case lo_case spec_char
 */

#include <iostream>

using namespace std;


int main()
{
    string str, ch, ch1, ch2;
    int i, j, len, x;

    cout << "Enter the string " << endl;
    getline(cin, str);
    len = str.length();
    x = len - 1;
    for (i = 0; i < len; i++)
    {
        for (j = 0; j < x - i; j++)
        {
            if (!(((str.at(j) >= 97 && str.at(j) <= 122) || (str.at(j) <= 90 && str.at(j) >= 65) || (str.at(j) >= 48 && str.at(j) <= 57))))
            {
                ch1 = str.at(j), ch = str.at(x);
                str.replace(j, 1, ch);
                str.replace(x, 1, ch1);
                j--, x--;
            }
            if ((str.at(j) > str.at(j + 1)))
            {
                ch = str.at(j), ch1 = str.at(j + 1);
                str.replace(j, 1, ch1);
                str.replace(j + 1, 1, ch);
                j--;
            }
        }
    }

    cout << str;


    return 0;
}
