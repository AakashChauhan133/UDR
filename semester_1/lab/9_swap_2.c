/*
Nov 6, 2022
Author: Aakash Chauhan
Program: Swap numbers without third vairable
*/

#include<stdio.h>
int main()
{
    int a, b;
    // Input
    printf("Enter any two numbers : \n");
    scanf("%d%d", &a, &b);

    // Logic
    a = a + b;
    b = a - b;
    a = a - b;

    // Output
    printf("a : %d\nb : %d\n", a, b);

    return 0;
}