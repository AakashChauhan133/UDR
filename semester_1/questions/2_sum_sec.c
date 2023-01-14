/*
    Author: Aakash Chauhan
    Date: January 7, 2023
    Problem: Sum of secondry diagonal using single loop
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Local decleration
    int a[20][20], n, m, i, j, sum;
    
    // Input Section
    printf("Enter the order of matrix: ");
    scanf("%d%d", &n, &m);
    if (m != n)
        exit(0);
    for (i = 0; i < n; i++)
    {
        printf("Row %d: ", i+1);
        for (j = 0; j < m; j++)
            scanf("%d", &a[i][j]);
    }

    // Logic
    sum = 0;
    for (i = 0; i < n; i++)
        sum += a[i][n - i - 1];

    // Output Section
    printf("The Sum of secondry diagonal is %d", sum);

    return 0;
}