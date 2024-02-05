#include <iostream>

using namespace std;

class Physics
{
protected:
    int phy;
public:
    Physics()
    {
        phy = 0;
    }
};
class Chemistry
{
protected:
    int chem;
public:
    Chemistry()
    {
        chem = 0;
    }

};
class Mathematics
{
protected:
    int math;
public:
    Mathematics()
    {
        math = 0;
    }

};

class Marks: public Physics, public Chemistry, public Mathematics
{
protected:
    int roll, mark;
    string name;
public:
    static int total;
    Marks()
    {
        mark = 0;
        roll = ++total;
    }
    void input(string n, int a, int b, int c)
    {
        name = n;
        phy = a;
        chem = b;
        math = c;
        mark = a + b + c;
    }
    int getMark()
    {
        return mark;
    }

};
int Marks::total = 0;

int main()
{
    Marks ob[10];
    int num, i, a, b, c;
    string name;
    cout << "Enter the number of students(max 10): ";
    cin >> num;

    for (i = 0; i < num; i++)
    {
        cout << "Data for student " << i + 1 << endl;
        cout << "Enter the marks of PCM: ";
        cin >> a >> b >> c;
        cout << "Enter name: ";
        cin >> name;
        ob[i].input(name, a, b, c);
    }
    a = 0;
    for (i = 0; i < num; i++)
    {
        a  += ob[i].getMark();
    }
    a /= (num * 3);

    cout << "Average marks of class: " << a << endl;

    return 0;
}
