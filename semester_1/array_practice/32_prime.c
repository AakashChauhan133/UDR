/*
    Author: Aakash Chauhan
    Date: January 8, 2023
    Problem: Write a program to count how many prime numbers are present in an array?
*/

#include <stdio.h>

int isPrime(int);

int main()
{
    // Local Decleration
    int a[20] = {0}, n, i, count;
    count = 0;

    // Input section
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter all the elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // Logic using isPrime function
    for (i = 0; i < n; i++)
        (isPrime(a[i])) ? count++: 0;
    
    // Output Section
    printf("\nThere are %d prime numbers\n", count);

    return 0;
}

int isPrime(int num)
{
    if (num == 0 || num == 1)
        return 0;
    for (int i = 2; i <= num / 2; i++)
    {
        if (!(num % i))
            return 0;
    }
    return 1;
}