#include <iostream>
using namespace std;

class in_ex
{
private:
    int x;
public:
    friend istream &operator >>(istream &, in_ex &);
    friend ostream &operator <<(ostream &, in_ex);
};
istream &operator >>(istream &ins, in_ex &obj)
{
    ins >> obj.x;
    return ins;
}
ostream &operator << (ostream & output, in_ex ob)
{
    output << ob.x;
    return output;
}

int main()
{
    in_ex ob;
    cin >> ob;
    cout << "value is : "  << ob;

    return 0;
}
