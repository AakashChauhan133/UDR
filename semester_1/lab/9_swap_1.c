/*
Nov 6, 2022
Author: Aakash Chauhan
Program: swap two numbers with third variable
*/

#include<stdio.h>
int main()
{
    int a, b, x;
    // Input
    printf("Enter any two numbers : \n");
    scanf("%d%d", &a, &b);

    // Logic
    x = a;
    a = b;
    b = x;

    // Output
    printf("a : %d\nb : %d\n", a, b);

    return 0;
}