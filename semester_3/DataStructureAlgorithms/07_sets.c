/*
 *  Author: Aakash Chauhan
 *  Date: Aug 10, 2023
 *  Do following operation on a two sets
 *      Intersection
 *      Unioin
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX 100

void insert(int *, int *);
void disp(int *, int);
void intersection(int *, int *, int, int);
void uni(int *, int *, int, int);
void removedup(int *, int *);

int main()
{
    // Local decleration
    int *a, *b, m, n;

    // Dynamic allocation
    a = (int *)malloc(n * sizeof(int));
    b = (int *)malloc(n * sizeof(int));

    // Input section
    insert(a, &m);
    insert(b, &n);

    // Function calling
    printf("Intersection: ");
    intersection(a, b, m, n);
    printf("Union: ");
    uni(a, b, m, n);

    return 0;
}

void insert(int *a, int *n)
{
    // Function to insert n elements in an array as set

    printf("Enter the size of array: ");
    scanf("%d", n);
    int i;
    for (i = 0; i < *n; i++)
    {
        printf("Enter the element: ");
        scanf("%d", (a + i));
    }
    printf("\nOriginal: ");
    removedup(a, n);
    disp(a, *n);
}

void disp(int *a, int n)
{
    // Funtion to display first n elements of an array

    int i;
    for (i = 0; i < n; i++)
        printf("%d ", *(a + i));
    printf("\n");
}

void intersection(int *a, int *b, int m, int n)
{
    // Function to find interserion of two sets a and b and store result in set

    int i = 0, j, set[MAX], x;
    x = 0;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i] == b[j])
                set[x++] = a[i];
        }
    }
    disp(set, x);
}

void uni(int *a, int *b, int m, int n)
{
    // Function to find Union of two sets a and b and store result in set
    
    int i = 0, j, set[MAX], x, f;
    x = 0;
    for (i = 0; i < m; i++)
    {
        set[x++] = a[i]; 
    }
    for (i = 0; i < n; i++)
    {
        set[x++] = b[i]; 
    }
    removedup(set, &x);
    disp(set, x);
}

void removedup(int *set, int * x)
{
    // Function to remove duplticate elements
    // Because set don't have duplicate elements

    int i, j;
    for (i = 0; i < *x; i++)
    {
        for (j = i + 1; j < *x; j++)
        {
            if (set[i] == set[j])
            {
                set[j] = set[(*x)  -1];
                j--;
                (*x)--;
            }
        }
    }
}