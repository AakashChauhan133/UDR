#include <stdio.h>

double myPow(double x, int n){
    if (n == 1)
        return x;
    else if (!(n % 2))
        return (myPow(x * x, n / 2));
    return x * (myPow(x * x, (n - 1) / 2));
}

int main()
{
    double x = 2.00;
    int n = 11;

    printf("%lf", myPow(x, n));

    return 0;
}