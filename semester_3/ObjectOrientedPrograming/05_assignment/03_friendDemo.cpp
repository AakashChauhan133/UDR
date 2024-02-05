/*
 *  Author  :   Aakash Chauhan
 *  Date    :   September 16, 2023
 *  basic friend class
 */

#include <iostream>

using namespace std;

class VowelCheck;

class FriendDemo
{
private:
    string str;
public:
    void setstr(string str)
    {
        this->str = str;
    }
    friend class VowelCheck;
};

class VowelCheck
{
public:
    void maxVowel(FriendDemo ob)
    {
        string nstr, hold;
        int len = ob.str.length();
        ob.str = ob.str + " ";
        int i, j, c, hc = -1;
        cout << "Sentence: " << ob.str << endl;
        for (i = 0; i < len; i++)
        {
            c = 0;
            nstr = "";
            j = 0;
            for (; ob.str.at(i) != ' '; j++, i++)
            {
                c = (ob.str.at(i) == 'u' || ob.str.at(i) == 'o' || ob.str.at(i) == 'i' || ob.str.at(i) == 'e' || ob.str.at(i) == 'a' || ob.str.at(i) == 'U' || ob.str.at(i) == 'O' || ob.str.at(i) == 'I' || ob.str.at(i) == 'E' || ob.str.at(i) == 'A') ? c + 1 : c;
                nstr = nstr + ob.str.at(i);
            }
            if (hc <= c)
            {
                hc = c;
                hold = nstr;
            }
        }
        cout << "Word with max vowels is : " << hold << "(" << hc << ")" << endl;


    }
};

int main()
{
    FriendDemo ob;
    VowelCheck ob2;
    ob.setstr("This is aakash it");
    ob2.maxVowel(ob);

    return 0;
}
