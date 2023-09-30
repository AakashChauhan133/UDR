#include <iostream>

using namespace std;

class staticDemo
{
public:
    static void numCal(int n, char ch)
    {
        if (ch == 'p')
            cout << "square: "<< n*n << endl;
        else
            cout << "cube: " << n*n*n << endl;
    }

    static void numCal(int n, int m, char ch)
    {
        if (ch == 'a')
            cout << "square: "<< n + m << endl;
        else
            cout << "cube: " << (int)ch << endl;
    }
    static void numCal(string s1, string s2)
    {
        if (s1.compare(s2) == 0)
            cout << "Equal" << endl;
        else
            cout << "Not Equal" << endl;
    }


};

int main()
{
    staticDemo::numCal("aakash", "aakash");
    staticDemo::numCal(2, 'p');
    staticDemo::numCal(2, 3, 'a');

    return 0;
}
