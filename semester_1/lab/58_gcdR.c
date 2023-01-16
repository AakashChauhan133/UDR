/*
Dec 12, 2022
Author: Aakash Chauhan
Program:	User defined program to print gcd of two numbers
*/

#include <stdio.h>

int gcd(int, int);

int main()
{
    int num1, num2, res;
    printf("Enter two numbres \n");
    scanf("%d%d", &num1, &num2);

    res = gcd(num1, num2);
    printf("gcd = %d", res);
    return 0;
}

int gcd(int num1, int num2)
{
    if (num2 == 0)
        return num1;
    return (gcd(num2, num1 % num2));
}
