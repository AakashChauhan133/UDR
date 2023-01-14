/*
    Author: Aakash Chauhan
    Date: January 6, 2023
    Problem: C Program to Print the Alternate Elements in an Array
*/

#include <stdio.h>

int main()
{
    // Local Decleration
    int a[20] = {0}, n, i;

    // Input section
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter all the elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // Logic
    for (i = 0; i < n; i+=2)
    {
        printf("%d ", a[i]);
    }

    return 0;
}