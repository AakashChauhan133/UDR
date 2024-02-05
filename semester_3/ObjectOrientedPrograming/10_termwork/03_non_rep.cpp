/*
    Name        :   Aakash
    Roll Number :   2021931
 */
#include <iostream>
using namespace std;

int main()
{
    // Local decleratin
    string str;
    int len, i, j, flag;

    // Input section
    cout << "   ***** INPUT *****" << endl;
    cout << "Enter the string: ";
    getline(cin, str);

    len = str.length();

    // Output section along with iterative logic
    cout << endl << "   ***** OUTPUT *****" << endl;
    for (i = 0; i < len; i++)
    {
        flag = 1;
        if (str.at(i) != ' ')
        {

            for (j = i + 1; j < len; j++)
            {
                if (str.at(i) == str.at(j))
                {
                    flag = 0;
                    str.at(j) = ' '; // replacing space
                }
            }
            if (flag)
            {
                cout << str.at(i) << ' ';
            }
        }
    }

    return 0;
}
