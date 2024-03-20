/*
    Author  :   Aakash Chauhan
    Date    :   Feb 17, 2024
    Sort elemts of array containing repative 0, 1, 2 using single array and loop
 */
#include <stdio.h>

#define MAX 20

void swap(int *, int *);
int main()
{
    int a[MAX] = {0, 1, 2, 0, 1, 2, 0, 1, 2, 0};
    int i = 0, n = 9;

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    int mid, l = 0, h = n - 1;
    mid = (l + h) / 2;

    for (i = 0; i < n/2; i++)
    {
        if (a[l] > a[mid])
        {
            swap(&a[l], &a[mid]);
        }
        else if (a[mid] > a[h])
        {
            swap(&a[mid], &a[h]);
        }
        if (a[l] == 0)
            l++;
        if (a[h] == 2)
            h--;
        mid++;
    }

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}

void swap(int *n, int *n1)
{
    int temp = *n;
    *n = *n1;
    *n1 = temp;
}