/*
 *  Author: Aakash Chauhan
 *  Date: Aug 3, 2023
 *  Program to delete alternate elements of an array (dynamic array)
 */

#include <stdio.h>
#include <stdlib.h>

void insert(int *, int);
void disp(int *, int);
void altdel(int *, int *);

int main()
{
    // Variable decleration
    int *a, n;
    // Dynamic allocation
    a = (int *)malloc(n * sizeof(int));
    // Input Section
    printf("Delete alternate elements\n");
    printf("Enter the size of array: ");
    scanf("%d", &n);

    // Function Calling and Output
    insert(a, n);
    printf("Original: ");
    disp(a, n);
    altdel(a, &n);
    printf("Updated: ");
    disp(a, n);


    return 0;
}

void insert(int *a, int n)
{
    // Function to insert n elements in an array
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter the element: ");
        scanf("%d", (a + i));
    }
}

void disp(int *a, int n)
{
    // Funtion to display first n elements of an array
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", *(a + i));
    printf("\n");
}

void altdel(int *a, int *n)
{
    // Function to delete alternate elements of an array

    int i;
    *n = *n/2;      // After altdelete length is half
    for (i = 0; i < *n; i++)
    {
        *(a + i) = *(a + (2 * i) + 1);
    }
}
