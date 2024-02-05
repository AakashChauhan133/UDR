
/*

    Date:   November 16, 2023
 */

#include <iostream>

using namespace std;


class Temperature
{
protected:
    float temp;
public:
    void setTempData(float temp)
    {
        this->temp = temp;
    }
    virtual void changetemp()
    {
    }
};

class Fahrenheit :public Temperature
{
public:
    float ctemp;
    void changetemp()
    {
        ctemp = (5./9.) * (temp - 32);
    }
};

class Celsius :public Temperature
{
public:
    float ftemp;

    void changetemp()
    {
        ftemp = (9./5.) * (temp + 32);
    }
};




int main()
{
    Temperature *pt;
    Celsius cob;
    Fahrenheit fob;
    float temp;

    cout << "Enter the temperature: ";
    cin >> temp;

    pt = &cob;
    pt->changetemp();
    cout << "C temp : " << cob.ftemp << endl;
    pt = &fob;
    pt->changetemp();
    cout << "F temp : " << fob.ctemp << endl;

    cob.setTempData(temp);
    fob.setTempData(temp);



    return 0;
}
