/*
    Author: Aakash Chauhan
    Date: January 6, 2023
    Problem: WAP to count separately how many even numbers are present in lower and upper triangle in a matrix.
*/

#include <stdio.h>

int main()
{
    // Local Decleration
    int a[20][20], n, m, i, j, small, large;

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
        small = large = a[i][0];
        for (j = 0; j < m; j++)
        {

            (a[i][j] > large) ? (large = a[i][j]) : 0;
            (a[i][j] < small) ? (small = a[i][j]) : 0;
        }
        printf("Largest of row %d is %d\n", i + 1, large);
        printf("Smallest of row %d is %d\n", i + 1, small);
    }
    printf("\n");
    // Logic for cols
    for (j = 0; j < n; j++)
    {
        small = large = a[0][j];
        for (i = 0; i < m; i++)
        {

            (a[i][j] > large) ? (large = a[i][j]) : 0;
            (a[i][j] < small) ? (small = a[i][j]) : 0;
        }
        printf("Largest of column %d is %d\n", j + 1, large);
        printf("Smallest of column %d is %d\n", j + 1, small);
    }
    return 0;
}