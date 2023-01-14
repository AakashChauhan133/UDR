/*
    Author: Aakash Chauhan
    Date: January 6, 2023
    Problem: WAP in C to input the elements of a two dimensional array of size 3*3 and do as follows:-
    •	Find the sum of its diagonal elements
    •	Find the sum of the elements of first and last row
    •   Find the sum of the elements of the elements of the first and last column
*/

#include <stdio.h>

int main()
{
    // Local Decleration
    int a[20][20], n, m, i, j, sum;
    n = m = 3;

    // Input section
    printf("Enter all the elements: \n");
    for (i = 0; i < n; i++)
    {
        printf("Row %d: ", i + 1);
        for (j = 0; j < m; j++)
            scanf("%d", &a[i][j]);
    }
    // Operation 1: Find the sum of its diagonal elements (ie. i == j)
    sum = 0;
    for (i = 0; i < n; i++)
        sum += a[i][i];
    printf("\nSum of Diagonal elements : %d", sum);

    // Operation 2: Find the sum of the elements of first and last row
    // for row 1 : i = 0
    i = 0;
    sum = 0;
    for (j = 0; j < m; j++)
        sum += a[i][j];
    // for row last : i = n - 1
    i = n - 1;
    for (j = 0; j < m; j++)
        sum += a[i][j];
    printf("\nSum of first and last row : %d", sum);

    // Operation 3: Find the sum of the elements of the elements of the first and last column
    // for col 1 : j = 0
    j = 0;
    sum = 0;
    for (i = 0; i < m; i++)
        sum += a[i][j];
    // for col last : j = m - 1
    j = m - 1;
    for (i = 0; i < m; i++)
        sum += a[i][j];
    printf("\nSum of first and last column : %d\n", sum);

    return 0;
}