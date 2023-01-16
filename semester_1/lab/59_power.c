/*
Dec 12, 2022
Author: Aakash Chauhan
Program:	User defined power function
*/
#include <stdio.h>

int power(int, int);

int main()
{
    int x, y, res;

    printf("Enter the value of x and y:\n");
    scanf("%d%d", &x, &y);

    res = power(x, y);
    printf("%d to the power %d is %d", x, y, res);

    return 0;
}

int power(int x, int y)
{
    if (y == 0)
        return 1;
    return (x * power(x, y - 1));
}