/*
    Author: Aakash Chauhan
    Date: January 6, 2023
    Problem: C Program to Split an Array from Specified Position & Add First Part to the End
*/

#include <stdio.h>

int main()
{
    // Local Decleration
    int a[20], n, i, j, count = 0, pos, temp;

    // Input section
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter all the elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter the position: ");
    scanf("%d", &pos);

    // Logic
    for (i = n; i >= pos; i--)
    {
        temp = a[n - 1];
        for (j = n - 1; j > 0; j--)
        {
            a[j] = a[j - 1];
        }
        a[0] = temp;
    }

    // Output Section
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}