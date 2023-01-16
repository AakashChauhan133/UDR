/*
Nov 6, 2022
Author: Aakash Chauhan
Program: Check Weather number is negative, postitive or zero
*/
#include <stdio.h>
int main()
{
    int n;

    // Input
    printf("Enter any intiger : ");
    scanf("%d", &n);

    // Logic
    if (n > 0)
    {
        printf("Positive\n");
    }
    else
    {
        if (n < 0)
        {
            printf("Negative\n");
        }
        else
        {
            printf("Zero");
        }
    }
    return 0;
}