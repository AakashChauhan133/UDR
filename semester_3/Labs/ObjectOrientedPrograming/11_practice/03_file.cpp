#include <iostream>
#include <fstream>
using namespace std;

class emp
{
public:
    int a, b;
    void show()
    {
        cout << a << " " << b << endl;
    }
};

emp e;
fstream fp;
void input()
{
    fp.open("01_file.txt", ios::out | ios::app | ios::binary);
    if (!fp)
        return;
    cout << "ENTER";
    cin >> e.a >> e.b;
    fp.write((char *)&e, sizeof(e));
    fp.close();
}
void prt()
{
    fp.open("01_file.txt", ios::in | ios::binary);

    while(fp.read((char *)&e, sizeof(e)))
    {
        cout << e.a << " " << e.b<< endl;
    }
    fp.close();
}

int main()
{
    int ans = 1;
    while (ans)
    {
        input();
        cout << endl << "CHOPIXE " << endl;
        cin >> ans;
    }

    prt();
}
