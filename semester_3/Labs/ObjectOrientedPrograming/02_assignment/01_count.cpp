/*
 *  Author  :   Aakash Chauhan
 *  Date    :   August 19, 2023
 *
 *  Count number of uppercase, lowercase, vowel and digit characters in a given string.
 */

#include <iostream>

using namespace std;


int main()
{
    string str;
    int i, len, up_count, lo_count, vo_count, di_count, ch;
    up_count = lo_count = vo_count = di_count = 0;

    cout << "Enter the string " << endl;
    getline(cin, str);

    len = str.length();

    for (i = 0; i < len; i++)
    {
        ch = str.at(i);
        if (ch >= 97 && ch <= 122)
            lo_count++;
        else if (ch <= 90 && ch >= 65)
            up_count++;
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            vo_count++;
        if (ch >= 48 && ch <= 57)
            di_count++;
    }
    cout << "Count of Upper case : " << up_count << endl;
    cout << "Count of lower case : " << lo_count << endl;
    cout << "Count of vowels     : " << vo_count << endl;
    cout << "Count of digit      : " << di_count << endl;

    return 0;
}
