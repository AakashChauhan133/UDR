/*
 *  Author  :   Aakash Chauhan
 *  Date    :   August 19, 2023
 *
 *  Remove the consecutive repeated characters
 *      INPUT – PROOOGGRAMMMMIIING
 *      OUTPUT – PROGRAMING
 */

#include <iostream>

using namespace std;


int main()
{
    string str;
    int i, ln;

    cout << "Enter the string " << endl;
    getline(cin, str);
    ln =  str.length();

    for (i = 0; i < ln - 1; i++)
    {
        if (str.at(i) == str.at(i + 1))
        {
            str.erase(i + 1, 1);
            ln--, i--;
        }
    }
    cout <<str;

    return 0;
}
