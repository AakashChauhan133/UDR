/*
    Name        :   Aakash
    Roll Number :   2021931
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
        // Constructor to initialize time with 0
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
        // Logic to add time
        ss = (t1.ss + t2.ss) % 60;
        mm = (t1.mm + t2.mm + (t1.ss + t2.ss) / 60) %60 ;
        hh = (t1.hh + t2.hh + (t1.mm + t2.mm + (t1.ss + t2.ss) / 60) / 60) % 24;
    }

    void display()
    {
        // Member function to display time in 11:59:59 format
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
    // Local variables of main
    Time t1(1, 55, 31), t2(12, 8, 40), t3;

    // Show time
    cout << "Time 1: " ;
    t1.display();
    cout << "Time 2: " ;
    t2.display();
    // Addining time
    t3.addTime(t1,t2);


    // Output section
    cout << "   ***** OUTPUT *****" << endl;
    t3.display();

    return 0;
}
