#include <iostream>
using namespace std;

class Time
{
private:
    int hh, mm, ss;
public:
    Time(int hh = 0, int mm = 0, int ss = 0)
    {
        this->hh = hh;
        this->mm = mm;
        this->ss = ss;
    }
    void show()
    {
        cout << hh << ":";
        cout << mm << ":";
        cout << ss << endl;
    }
    //Adding time without friend function
    Time operator +(Time ob)
    {
        Time tob;
        tob.ss = (ob.ss + this->ss) % 60;
        tob.mm = ((ob.mm + this->mm) + (ob.ss + this->ss) / 60) % 60;
        tob.hh = ((ob.hh + this->hh) + (ob.mm + this->mm) / 60 + (ob.ss + this->ss) / 3600) % 24;
        return tob;
    }
};

class Time2
{
private:
    int hh, mm, ss;
public:
    Time2(int hh = 0, int mm = 0, int ss = 0)
    {
        this->hh = hh;
        this->mm = mm;
        this->ss = ss;
    }
    void show()
    {
        cout << hh << ":";
        cout << mm << ":";
        cout << ss << endl;
    }
    //Adding time with friend function
    friend Time2 operator +(Time2, Time2);
};
Time2 operator +(Time2 ob, Time2 ob1)
{
    Time2 tob;
    tob.ss = (ob.ss + ob1.ss) % 60;
    tob.mm = ((ob.mm + ob1.mm) + (ob.ss + ob1.ss) / 60) % 60;
    tob.hh = ((ob.hh + ob1.hh) + (ob.mm + ob1.mm) / 60 + (ob.ss + ob1.ss) / 3600) % 24;
    return tob;
}
int main()
{
    Time2 t1(23, 2, 4), t2(1, 59, 5), t3;
    t3 = t1 + t2;

    t3.show();

    return 0;
}
