/*
    Author: Aakash Chauhan
    Date: January 6, 2023
    Problem: C Program to Print All the Repeated Numbers with Frequency in an Array.
*/

#include <stdio.h>

int main()
{
    // Local Decleration
    int a[20], n, i, j, freq, temp;

    // Input section
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter all the elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // Logic
    for (i = 0; i < n; i++)
    {
        freq = 0, temp = a[i];
        for (j = 0; j < n; j++)
        {
            if (temp == a[j])
            {
                freq++;
                // deleting element
                for (int k = j; k < n; k++)
                {
                    a[k] = a[k + 1];
                }
                n--, j--;
            }
        }
        if (freq > 1)
            printf("The %d is %d times\n", temp, freq);
    }

    return 0;
}