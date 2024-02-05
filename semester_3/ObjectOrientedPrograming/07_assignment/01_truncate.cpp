#include <iostream>

using namespace std;

class SataticDemo
{
public:
    static void funcDemo(string str, int n)
    {
        string nstr = "";
        int i, c = 0;

        for (i = 0; str.at(i); i++)
        {
            nstr = nstr + str.at(i);
            if (str.at(i) == 32 && str.at(i + 1) != 32)
                c++;

            if (c == n)
                break;
        }
        cout << "Truncated string" << endl << nstr << endl;
    }
    static void funcDemo(string str)
    {
        str = str + " ";
        string nstr;
        int i, nlen, j, f, c = 0;
        for (i = 0; str[i]; i++)
        {
            nstr = "";
            for (i; str.at(i) != ' ' ; i++)
                nstr = nstr + str.at(i);
            nlen = nstr.length();
            j = 0;
            f = 1;
            while (j < nlen)
            {
                if (nstr[j] != nstr[nlen-1])
                {
                    f = 0;
                    break;
                }
                j++, nlen--;
            }
            if (f)
            {
                c++;
            }
        }
        cout << "Palindrome count = " << c << endl;
    }

    static void funcDemo(int n, string str)
    {
        int i, len = str.length();
        int counter = 0;
        for (i = 0; i < len; i++)
        {
            counter++;
            cout << str.at(i);
            if (counter == n)
            {
                cout << " ";
                counter = 0;
            }
        }
        cout << endl;
    }
};






int main()
{
    SataticDemo ob;

    ob.funcDemo("INFORMATION");

    return 0;
}
