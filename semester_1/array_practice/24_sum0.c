/*
    Author: Aakash Chauhan
    Date: January 6, 2023
    Problem: C Program to Find the two Elements such that their Sum is Closest to Zero
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

    // Logic
    num1 = num2 = a[0];
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] < sum)
            {
                num1 = a[i], num2 = a[j];
                // deleting element
                for (int k = j; k < n; k++)
                {
                    a[i] = a[i + 1];
                }
                n--;
            }
        }
    }
    printf("num1 = %d\nnum2 = %d", num1, num2);

    return 0;
}