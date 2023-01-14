/*
    Name: Aakash
    University Roll No: 2021931
    Section: M

    Problem statement: Write a program to print following series: 0 3 8 15 24 35 48 …. Upto n term.
*/

#include <stdio.h>

int main()
{
    // Local decleration
    int n, num, diff, i;

    // Input
    printf("********** INPUT **********\n");
    printf("Value of n: ");
    scanf("%d", &n);

    // Logic and output
    diff = 3;
    num = 0;
    printf("********** OUTPUT **********\n");
    for (i = 1; i <= n; i++)
    {
        printf("%d ", num);
        num = num + diff;
        diff = diff + 2;
    }

    return 0;
}
