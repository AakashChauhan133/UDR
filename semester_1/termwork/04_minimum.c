/*
    Name: Aakash
    University Roll No: 2021931
    Section: M

    Problem statement: Write a C program to find maximum and minimum among n integer number.
*/

#include <stdio.h>

int main()
{
    // Local decleration
    int n, i, num, min, max;

    // Input
    printf("********** INPUT **********\n");
    printf("Number of intigers: ");
    scanf("%d", &n);
    printf("Enter intiger number 1 : ");
    scanf("%d", &num);
    min = max = num;

    // Logic
    for (i = 2; i <= n; i++)
    {
        printf("Enter intiger number %d : ", i);
        scanf("%d", &num);
        if (num > max)
        {
            max = num;
        }
        else if (num < min)
        {
            min = num;
        }
    }

    printf("********** OUTPUT **********\n");
    printf("Max: %d\nMin: %d\n", max, min);

    return 0;
}
