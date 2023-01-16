/*
Dec 12, 2022
Author: Aakash Chauhan
Program:	User defined program to print sum of n natural numbers
*/

#include <stdio.h>

int sumR(int);

int main()
{
    int num, res;
    printf("Enter the vlue of n: ");
    scanf("%d", &num);

    res = sumR(num);
    printf("sum = %d", res);
    return 0;
}

int sumR(int num)
{
    if (num == 0)
        return 0;
    return (num + sumR(num - 1));
}