/*
 *  Author  :   Aakash Chauhan
 *  Date    :   October 10, 2023
 *  Selection sort
 */

#include <stdio.h>
#define MAX 10


void create(int [], int);
void display(int [], int);
void sort(int [], int);
int main()
{
    int a[MAX], n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    create(a, n);
    sort(a, n);
    display(a, n);


    return 0;
}

void create(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter the value at position %d : ", i + 1);
        scanf("%d", &a[i]);
    }
    display(a, n);
}
void display(int a[], int n)
{
    int i;
    printf("Array elements: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void sort(int a[], int n)
{
    int i, j , temp, t;
    for (i = 0; i < n - 1; i ++)
    {
        temp = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j]<a[temp])
            {
                temp=j;
            }
        }
        t = a[temp];
        a[temp] = a[i];
        a[i] = t;
    }
}

