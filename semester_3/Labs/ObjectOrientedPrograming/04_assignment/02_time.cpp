/*
 *  Author  :   Aakash Chauhan
 *  Date    :   September 2, 2023
 *  Add two times
 */

#include <iostream>
using namespace std;

class Time
{
private:
    int hh;
    int mm;
    int ss;
    void gettime(int t)
    {
        if (t < 10)
            cout << "0" << t;
        else
            cout << t;
    }
public:
    Time()
    {
        hh = 0;
        mm = 0;
        ss = 0;
    }
    Time(int hh, int mm, int ss)
    {
        this->hh = hh;
        this->mm = mm;
        this->ss = ss;
    }
    void addTime(Time t1, Time t2)
    {
        ss = (t1.ss + t2.ss) % 60;
        mm = (t1.mm + t2.mm + (t1.ss + t2.ss) / 60) %60 ;
        hh = (t1.hh + t2.hh + (t1.mm + t2.mm + (t1.ss + t2.ss) / 60) / 60) % 24;
    }

    void display()
    {
        gettime(hh);
        cout << ":";
        gettime(mm);
        cout << ":";
        gettime(ss);
        cout << endl;
    }
};

int main()
{
    Time t1(1, 55, 31), t2(12, 8, 40), t3;
    t3.addTime(t1,t2);

    t3.display();

    return 0;
}
