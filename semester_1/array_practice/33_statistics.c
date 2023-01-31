/*
    Author: Aakash Chauhan
    Date: January 6, 2023
    Problem: Write a program to find mean, Average and standard deviation of the elements in an array?
*/

#include <stdio.h>

int main()
{
    // Local Decleration
    int a[20] = {0}, n, i, j, sum, num1, num2;

    // Input section
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter all the elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    return 0;
}