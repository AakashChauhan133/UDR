/*
    Author: Aakash Chauhan
    Date: January 6, 2023
    Problem: WAP to find sum and average of each rows and columns separately.
*/

#include <stdio.h>

int main()
{
    // Local Decleration
    int a[20][20], n, m, i, j, sum, avg;

    // Input section
    printf("Enter the order of matrix (n*m): ");
    scanf("%d%d", &n, &m);
    printf("Enter all the elements: \n");
    for (i = 0; i < n; i++)
    {
        printf("Row %d: ", i + 1);
        for (j = 0; j < m; j++)
            scanf("%d", &a[i][j]);
    }

    printf("\n");
    // Logic for rows
    for (i = 0; i < n; i++)
    {
        sum = avg = 0;
        for (j = 0; j < m; j++)
            sum += a[i][j];
        avg = sum/m;
        printf("Sum of row %d is %d\n", i + 1, sum);
        printf("Average of row %d is %d\n", i + 1, avg);
    }
    printf("\n");
    // Logic for cols
    for (j = 0; j < n; j++)
    {
        sum = avg = 0;
        for (i = 0; i < m; i++)
            sum += a[i][j];
        avg = sum/m;
        printf("Sum of column %d is %d\n", j + 1, sum);
        printf("Average of column %d is %d\n", j + 1, avg);
    }
    return 0;
}