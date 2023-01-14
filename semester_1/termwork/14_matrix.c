/*
    Name: Aakash
    University Roll No: 2021931
    Section: M

    Problem statement: Input a matrix of order m x n. Print the sum of all the odd elements present in each row and all the odd elements present in each column.
*/

#include <stdio.h>

int main()
{
    // Local decleration
    int m, n, i, j, x;
    int a[20][20];

    printf("********** INPUT **********\n");
    printf("Enter the order of matrix(m and n): ");
    scanf("%d%d", &m, &n);
    int sum1, sum2;

    for (i = 0; i < m; i++)
    {
        printf("Enter %d Elements of row %d: ", n, i + 1);
        for (j = 0; j < n; j++)
        {
            scanf("%d", &x);
            a[i][j] = x;
        }
    }

    // Logic
    printf("********** OUTPUT **********\n");
    for (i = 0; i < m; i++)
    {
        sum1 = 0;
        for (j = 0; j < n; j++)
        {
            if (a[i][j] % 2)
                sum1 = sum1 + a[i][j];
        }
        printf("Sum of row %d's odd elements: %d\n", i + 1, sum1);
    }
    for (j = 0; j < n; j++)
    {
        sum2 = 0;
        for (i = 0; i < m; i++)
        {
            if (a[i][j] % 2)
                sum2 = sum2 + a[i][j];
        }
        printf("Sum of col %d's odd elements: %d\n", j + 1, sum2);
    }

    return 0;
}
