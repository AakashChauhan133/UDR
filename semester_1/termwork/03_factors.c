/*
    Name: Aakash
    University Roll No: 2021931
    Section: M

    Problem statement: Write a C program to find factors of a number and check whether number is perfect or not
*/

#include <stdio.h>

int main()
{
    // Local Decleration
    int num, i, sum;
    sum = 0;

    // Input
    printf("********** INPUT **********\n");
    printf("Number: ");
    scanf("%d", &num);

    // Logic
    printf("********** OUTPUT **********\n");
    printf("Factors: ");
    for (i = 1; i <= (num / 2); i++)
    {
        if (num % i == 0)
        {
            printf("%d ", i);
            sum = sum + i;
        }
    }
    if (sum == num)
    {
        printf("\nThis a perfect number\n");
    }
    else
    {
        printf("\nThis is not a perfect number\n");
    }

    return 0;
}