/*
    Name: Aakash
    University Roll No: 2021931
    Section: M

    Problem statement:  Write a program to print following pattern:
    *                 *
    * *             * *
    * * *         * * *
    * * * *     * * * *
    * * * * * * * * * *

*/

#include <stdio.h>

int main()
{
    // Local decleration
    int row, i, l, s, r, step;

    // Input
    printf("********** INPUT **********\n");
    printf("Numbers of rows: ");
    scanf("%d", &row);
    step = 2;

    // Logic and Output
    printf("********** OUTPUT **********\n");
    for (i = 1; i <= row; i++)
    {
        for (l = 1; l <= i; l++)
        {
            printf("* ");
        }
        for (s = (2 * row - step); s > 0; s--)
        {
            printf("  ");
        }
        for (r = 1; r <= i; r++)
        {
            printf("* ");
        }
        printf("\n");
        step = step + 2;
    }

    return 0;
}