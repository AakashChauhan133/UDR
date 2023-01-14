/*
    Author: Aakash Chauhan
    Date: January 6, 2023
    Problem: C Program to Print the kth Element in the Array
*/

#include <stdio.h>

int main()
{
    // Local Decleration
    int a[20], n, i,pos;

    // Input section
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter all the elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter the positon of element want to print: ");
    scanf("%d", &pos);

    // Logic
    printf("The element at position %d is %d\n", pos, a[pos - 1]);

    return 0;
}