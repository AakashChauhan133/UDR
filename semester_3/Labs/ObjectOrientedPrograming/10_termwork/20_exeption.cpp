/*
    Name        :   Aakash
    Roll Number :   2021931
 */

#include <iostream>
using namespace std;
class MyCalculator
{
private:
    int n, p;
public:
    void input (int a = 0, int b = 0)
    {
        n = a;
        p = b;
    }

    int power()
    {
        // Logic with exeption handlinf
        int res = 1, i;
        if (n < 0 || p < 0)
            throw "C++Exception: n or p should not be negative";
            if (n == 0 && p == 0)
                throw 10;

        for (i = 0; i < p; ++i)
        {
            res *= n;
        }
        return res;
    }

};
int main()
{
    // Local decleration
    MyCalculator ob[5];
    int i, a, b;
    cout << "******* INPUT *******" << endl;
    for(i = 0; i < 5; i++)
    {
        cout << "Enter n and p: ";
        cin >> a >> b;
        ob[i].input(a, b);
    }

    cout << "******* OUTPUT *******" << endl;
    for(i = 0; i < 5; i++)
    {
        try
        {
            cout << ob[i].power() << endl;
        }
        catch(const char * msg)
        {
            cerr << msg << endl;
        }
        catch (int n)
        {
            cout << "C++Exception: n and p should not be zero." << endl;
        }
    }

    return 0;
}
