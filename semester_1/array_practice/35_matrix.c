/*
    Author: Aakash Chauhan
    Date: January 30 2023
    Problem: Write a program to replace zero’s in a matrix with multiples of a given n?
*/

#include <stdio.h>

int main()
{
    // Local decleratin
    int a[20][20], n, m, i, j, num, multiplier = 1;

    // Input Section
    printf("Enter the order of matrix: ");
    scanf("%d%d", &n, &m);
    printf("Enter the value of number: ");
    scanf("%d", &num);
    for (i = 0; i < n; i++)
    {
        printf("Enter the elemts of row %d :", i + 1);
        for (j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Loigc
    for (i = 0; i < n; i++)
    {
        printf("Enter the elemts of row %d :", i + 1);
        for (j = 0; j < m; j++)
        {
            if (a[i][j] == 0)
            {
                a[i][j] = num * (multiplier++);
            }
        }
    }

    // Output Section
    for (i = 0; i < n; i++)
    {
        printf("\n");
        for (j = 0; j < m; j++)
        {
            printf("%d ", a[i][j]);
        }
    }
}
