/*
    Name        :   Aakash
    Roll Number :   2021931
 */

#include <iostream>
#include <fstream>
using namespace std;

int ispalin(string nstr)
{
    int j, f, nlen = nstr.length() - 1;
    j = 0;
    f = 1;
    if (nlen == 0 && nstr.at(0) == '\n')
        return 0;
    while (j < nlen)
    {
        if (nstr[j] != nstr[nlen-1])
        {
            f = 0;
            break;
        }
        j++, nlen--;
    }
    return f;
}

int main()
{
    int pal_count = 0;
    char ch;
    string str = "";
    ifstream fin("19_file.txt");
    if (!fin)
    {
        cout << "ERROR" << endl;
        return 1;
    }
    cout << "***** DATA IN FILE ***** " << endl;
    while(!fin.eof())
    {
        fin.get(ch);
        str += ch;
        if (ch == ' ' || ch == '\n')
        {
            pal_count += ispalin(str);
            cout << str;
            str = "";
        }
    }

    // Output section
    cout << "   ***** OUTPUT *****" << endl;
    cout << "PALNDROME COUNT : " << pal_count;


    return 0;
}
