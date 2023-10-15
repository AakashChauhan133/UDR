/*
 *  Author: Aakash Chauhan
 *  Date: Aug 3, 2023
 *  Program to check weather an array is in AP or not if not in AP find the one missing term
 */

#include <stdio.h>
#include <stdlib.h>

void insert(int *, int);
void disp(int *, int);
void newAP(int *, int);

int main()
{
    int *a, n;
    a = (int *)malloc(n * sizeof(int));
    printf("Correct an AP\n");
    printf("Enter the size of array: ");
    scanf("%d", &n);

    insert(a, n);
    printf("Original: ");
    disp(a, n);
    newAP(a, n);


    return 0;
}

void insert(int *a, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter the element: ");
        scanf("%d", (a + i));
    }
}

void disp(int *a, int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", *(a + i));
    printf("\n");
}

void newAP(int *a, int n)
{
    int i, diff, count = 0, val, indx;
    diff = *(a + 1) - *(a);
    for (i = 1; i < n - 1; i++)
    {
        if (*(a + i + 1)- *(a + i)  != diff)
        {
            count++;
            indx = i;
        }
    }
    if (!count)
        printf("It is an AP\n");
    else if (count == 1)
    {
        val = *(a + indx) + diff;
        printf("missing term at index %d is %d\n", indx + 1, val);
    }
    else if (count >= 2)
    {
        printf("Not an AP and not possible to create\n");
    }
}

