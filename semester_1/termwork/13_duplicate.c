/*
    Name: Aakash
    University Roll No: 2021931
    Section: M

    Problem statement: Write a code to remove duplicate elements in an array using function.
*/

#include <stdio.h>

// Function decleration
void Duplicalte(int[], int);

int main()
{
    // Local decleration
    int a[20] = {1, 1, 2, 2, 3}, i, len, x;
    // Input
    printf("********** INPUT **********\n");
    printf("Numbers of elements in array: ");
    scanf("%d", &len);
    printf("Enter Elements\n");
    for (i = 0; i < len; i++)
    {
        scanf("%d", &x);
        a[i] = x;
    }
    // Function calling
    Duplicalte(a, len);
    return 0;
}

// Function definiton
void Duplicalte(int a[], int len)
{
    int res[20] = {0},k = 0, lenR = 0;
    int i, count, j;
    for (i = 0; i < len; i++)
    {
        count = 1;
        if (a[i] != -1)
        {
            res[k++] = a[i];
            lenR++;
            for (j = i + 1; j < len; j++)
            {
                if (a[i] == a[j])
                {
                    count++;
                    a[j] = -1;
                }
            }
        }
    }

    printf("********** OUTPUT **********\n");

    for (i = 0; i < lenR; i++)
    {
        printf("%d ", res[i]);
    }
}
