#include <iostream>

using namespace std;

class Employee
{
protected:
    string name;
    int emp_code;
public:
    Employee(string n = "", int code = 0)
    {
        name = n;
        emp_code = code;
    }
    int getCode()
    {
        return emp_code;
    }
};
class Fulltime:public Employee
{
protected:
    int days, salary, rate;
public:
    Fulltime(string n ="", int code = 0, int d = 0, int r = 0): Employee(n, code)
    {
        days = d;
        rate = r;
        salary = r * d;
    }
    void input()
    {
        cout << "ENTER Days: ";
        cin >> days;
        cout << "Enter rate: ";
        cin >> rate;
        salary = rate * days;
    }
    void show()
    {
        cout << "name: " << name << endl;
        cout << "code: " << emp_code << endl;
        cout << "Salary: " << salary << endl;
    }
};
class Parttime:public Employee
{
protected:
    int hours, rate, salary;
public:
    Parttime(string n = "", int code = 0, int h = 0, int r = 0): Employee(n, code)
    {
        hours = h;
        rate = r;
        salary = h * r;
    }
    void input()
    {
        cout << "ENTER Days: ";
        cin >> hours;
        cout << "Enter rate: ";
        cin >> rate;
        salary = hours * rate;
    }
    void show()
    {
        cout << "name: " << name << endl;
        cout << "code: " << emp_code << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Parttime ob[3] = {{"A", 1, 2, 100},{"B", 2, 2, 100},{"C", 3, 2, 100}};
    Fulltime tob[3] = {{"D", 4, 20, 100},{"E", 5, 20, 100},{"F", 6, 20, 100}};
    int ch = 1, i, code;

    while(ch)
    {
        cout << "MENU" << endl;
        cout << "[1] Input for n = 3 employee" << endl;
        cout << "[2] Display" << endl;
        cout << "[3] Search by code" << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            for (i = 0; i < 3; i++)
            {
                ob[i].input();
            }
            for (i = 0; i < 3; i++)
            {
                tob[i].input();
            }
            break;

        case 2:
            for (i = 0; i < 3; i++)
            {
                ob[i].show();
            }
            for (i = 0; i < 3; i++)
            {
                tob[i].show();
            }
            break;
        case 3:
            cout << "Enter code to search" << endl;
            cin >> code;
            for (i = 0; i < 3; i++)
            {
                if (ob[i].getCode() == code)
                {
                    ob[i].show();
                    break;
                }
            }
            for (i = 0; i < 3; i++)
            {
                if (tob[i].getCode() == code)
                {
                    tob[i].show();
                    break;
                }

            }
        }
    }

    return 0;
}
