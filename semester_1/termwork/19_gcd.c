/*
    Name: Aakash
    University Roll No: 2021931
    Section: M

    Problem statement: Write a recursive code to print gcd of 2 numbers.
*/

#include <stdio.h>

// Declearation of function
int gcd(int, int);

int main()
{
    int num1, num2, res;

    printf("************ INPUT ************\n");
    printf("Enter two numbers\n");
    scanf("%d%d", &num1, &num2);

    res = gcd(num1, num2);
    printf("************ OUTPUT ************\n");
    printf("The gcd od %d and %d is %d", num1, num2, res);
    return 0;
}

// Defining function recursivly
int gcd(int num1, int num2)
{
    if (num2 == 0)
        return num1;
    else
        return (gcd(num2, num1 % num2));
}
