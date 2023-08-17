/*
    Name: Aakash
    University Roll No: 2021931
    Section: M

    Problem statement: Write a program to print all the prime numbers between the range m and n.
*/
// Note: Negative numbers can not be prime

#include <stdio.h>

int main()
{
    // Local decleration of variables
    int m, n, i, j, flag;
    flag = 0;

    // Input from user with constraints
    printf("********** INPUT **********\n");
    printf("Note: (m,n > 0) and (n > m)\nEnter the range (m, n): ");
    scanf("%d%d", &m, &n);

    // Logic and Output
    printf("********** OUTPUT **********\n");
    for (i = m; i <= n; i++)
    {
        for (j = 2; j <= (i / 2); j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if ((flag == 0) && (i != 1))
        {
            printf("%d\n", i);
        }
        flag = 0;
    }

    return 0;
}
