/*
    Author: Aakash Chauhan
    Date: January 7, 2023
    Problem: Sum of largest elements of each row
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Local decleration
    int a[20][20], n, m, i, j, sum, largest;

    // Input Section
    printf("Enter the order of matrix: ");
    scanf("%d%d", &n, &m);
    for (i = 0; i < n; i++)
    {
        printf("Row %d: ", i + 1);
        for (j = 0; j < m; j++)
            scanf("%d", &a[i][j]);
    }

    // Logic
    sum = 0;
    for (i = 0; i < n; i++)
    {
        largest = a[i][0];
        for (j = 1; j < m; j++)
        {
            if (a[i][j] > largest)
                largest = a[i][j];
        }
        sum += largest;
    }

    // Output Section
    printf("The Sum of largest elements in each row is %d", sum);

    return 0;
}