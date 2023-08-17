/*
    Name: Aakash
    University Roll No: 2021931
    Section: M

    Problem statement: Write a C program to input n integer numbers from user and print reverse of each number.
*/

#include <stdio.h>

int main()
{
    // Local decleration
    int n, i, num, rev, temp;
    printf("********** INPUT **********\n");
    printf("Number of in integers: ");
    scanf("%d", &n);

    // Logic and Output
    printf("********** OUTPUT **********\n");
    for (i = 1; i <= n; i++)
    {
        printf("Number %d: ", i);
        scanf("%d", &num);
        temp = num;
        rev = 0;
        while (num != 0)
        {
            rev = (rev * 10) + (num % 10);
            num = num / 10;
        }
        printf("Reverse: %d\n\n", rev);
    }

    return 0;
}