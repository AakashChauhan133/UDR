/*
    Name: Aakash
    University Roll No: 2021931
    Section: M

    Problem statement: Input a matrix of order m x n and print the square of elements in principal diagonal and cubes of secondary diagonal.
*/

#include <stdio.h>

int main()
{
    // Local decleration
    int a[20][20], i, j, n, m, sq, cu;

    printf("********** INPUT **********\n");
    printf("Enter the order of matrix ie.(m,n): ");
    scanf("%d%d", &m, &n);
    if (m == n)
    {
        for (i = 0; i < m; i++)
        {
            printf("Enter the elements os row %d: ", i + 1);
            for (j = 0; j < n; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }

        // Logic and Output
        printf("*************** OUTPUT **************\n");
        printf("Square of diagonal elements :\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                // Diagonal elements have same row and coulumn number
                if (j == i)
                {
                    sq = a[i][j] * a[i][j];
                    printf("%d ", sq);
                }
            }
        }
        printf("\nCube of diagonal elements :\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                // For sec diagonal row + column number = total number of row + 1= total number of columns + 1
                if (i + j + 1 == m)
                {
                    cu = a[i][j] * a[i][j] * a[i][j];
                    printf("%d ", cu);
                }
            }
        }
    }
    else
    {
        printf("Only square matrix have diagonal elemnts\n");
    }
}
