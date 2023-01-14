/*
    Name: Aakash
    University Roll No: 2021931
    Section: M

    Problem statement: Write a program in C to calculate the sum of numbers from 1 to n using recursion.
*/

#include <stdio.h>

// Decleration of functions
int sumN(int);

int main()
{
    // Local decleration
    int num, res;
    printf("************ INPUT ************\n");
    printf("Enter the value of n: ");
    scanf("%d", &num);
    printf("************ OUTPUT ************\n");
    res = sumN(num);
    printf("%d", res);
    return 0;
}

// Defintion of functions
int sumN(int num)
{
    if (num == 0)
        return 0;
    else
        return (num + sumN(num - 1));
}