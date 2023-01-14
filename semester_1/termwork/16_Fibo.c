/*
    Name: Aakash
    University Roll No: 2021931
    Section: M

    Problem statement: Write a user defined function to print Fibonacci series.
*/

#include <stdio.h>
// Intialising function
int fib(int);

int main()
{
    // Local decleration
    int num, i, res;

    printf("************** INPUT **************\n");
    printf("Enter the number of terms you want to print : ");
    scanf("%d", &num);

    printf("************** OUTPUT **************\n");
    printf("0\n");
    printf("1\n");

    // Calling function
    for (i = 1; i < num - 1; i++)
    {
        res = fib(i);
        printf("%d\n", res);
    }

    return 0;
}

// Defining function
int fib(int num)
{
    if (num == 0 || num == 1)
        return 1;
    else
        return (fib(num - 1) + fib(num - 2));
}