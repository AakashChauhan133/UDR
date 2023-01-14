/*
    Author: Aakash Chauhan
    Date: January 11, 2023
    (1^3)/1! + (2^3)/2! + (3^3)/3! + ... + n

*/

#include <stdio.h>

int main()
{
    // Decleration
    int n, i, j, fact;
    float sum = 0.;

    // Input
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Logic
    for (i = 1; i <= n; i++)
    {
        fact = 1;
        for (j = 1; j <= i; j++)
        {
            fact = fact * j;
        }
        sum = sum + (float)(i * i * i) / fact;
    }

    // Output
    printf("%f", sum);
    return 0;
}