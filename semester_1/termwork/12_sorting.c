/*
    Name: Aakash
    University Roll No: 2021931
    Section: M

    Problem statement: Input n elements in an array and organize them in descending order using a sorting technique.
*/

#include <stdio.h>

int main()
{
    // Local decleration
    int a[20], res[20], lenA, lenR, i, j, k, x, max, id;

    // Input
    printf("********** INPUT **********\n");
    printf("Numbers of elements in array: ");
    scanf("%d", &lenA);
    printf("Enter Elements\n");
    for (i = 0; i < lenA; i++)
    {
        scanf("%d", &x);
        a[i] = x;
    }
    k = 0;
    for (i = 0; i < lenA; i++)
    {
        max = a[0];
        for (j = 0; j < lenA; j++)
        {
            if (a[j] >= max)
            {
                id = j;
                max = a[j];
            }
        }
        a[id] = -1;
        res[k++] = max;
    }
    lenR = k;

    printf("********** OUTPUT **********\n");
    for (i = 0; i < lenR; i++)
    {
        printf("%d ", res[i]);
    }

    return 0;
}
