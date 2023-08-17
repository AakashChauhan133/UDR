/*
    Name: Aakash
    University Roll No: 2021931
    Section: M

    Problem statement: Write a C program to find sum of following series: 1 + 1/3! + 1/5! + 1/7! + …………….. 1/n!
*/

#include <stdio.h>

int main()
{
    // Local decleration
    float sum, f, n;
    int i, j;

    // Input
    printf("********** INPUT **********\n");
    printf("value of n: ");
    scanf("%f", &n);

    for (i = 1; i <= n; i = i + 2)
    {
        f = 1;
        for (j = 1; j <= i; j++)
        {
            f = f * (float)j;
        }
        sum = sum + (1.0 / f);
    }
    printf("********** OUTPUT **********\n");
    printf("Sum = %f", sum);

    return 0;
}
