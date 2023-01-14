/*
    Author: Aakash Chauhan
    Date: January 5, 2023
    Problem: Bubble Sort
*/

#include <stdio.h>

int main()
{
    // Local Decleration
    int a[20], n, i, j, temp;

    // Input Section
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);
    printf("Enter all the elements of array: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    
    // Logic For bubble sort
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        if (a[j] > a[j + 1])
        {
            temp = a[j];
            a[j] = a[j + 1];
            a[j + 1] = temp;
        }
    }
    
    // Output Section
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}