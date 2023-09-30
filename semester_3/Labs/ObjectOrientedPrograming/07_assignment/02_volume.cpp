#include <iostream>
using namespace std;


class volume
{
public:
    static double PI;
    double vol_cal(double r)
    {
        double val;
        val = (4./3.)*PI*(r*r*r);
        return val;
    }
    double vol_cal(double r, double h)
    {
        double val;
        val = (1./3.)*PI*(h*r*r);
        return val;
    }
    double vol_cal(double l, double b, double h)
    {
        double val;
        val = l * b * h;
        return val;
    }

};double volume::PI = 3.14259;
int main()
{
    volume ob;
    double ans;
    ans = ob.vol_cal(1, 1);


    cout << "volume: " << ans << endl;
    return 0;
}
