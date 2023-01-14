/*
    Author: Aakash Chauhan
    Date: January 6, 2023
    Problem: WAP to count separately how many even numbers are present in lower and upper triangle in a matrix.
*/

#include <stdio.h>

int main()
{
    // Local Decleration
    int a[20][20], n, m, i, j, lower, upper;
    lower = upper = 0;

    // Input section
    printf("Enter the order of matrix (n*m): ");
    scanf("%d%d", &n, &m);
    if (m != n)
        return 0;
    printf("Enter all the elements: \n");
    for (i = 0; i < n; i++)
    {
        printf("Row %d: ", i + 1);
        for (j = 0; j < m; j++)
            scanf("%d", &a[i][j]);
    }

    // Logic
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
        {
            if (i >= j && !(a[i][j] % 2))
                lower++;
            if (i <= j && !(a[i][j] % 2))
                upper++;
        }
    printf("Number of even number in lower triangle is %d\n", lower);
    printf("Number of even number in upper triangle is %d\n", upper);
    return 0;
}