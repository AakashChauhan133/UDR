/*
 *  Author: Aakash Chauhan
 *  Date: Aug 3, 2023
 *  Program to check weather an array is in AP or not if not in AP find the one missing term (Dynamic array)
 */

#include <stdio.h>
#include <stdlib.h>

void insert(int *, int);
void disp(int *, int);
void newAP(int *, int);

int main()
{
    // Local decleration
    int *a, n;
    // Dynamic allocation
    a = (int *)malloc(n * sizeof(int));
    // Input section
    printf("Correct an AP\n");
    printf("Enter the size of array: ");
    scanf("%d", &n);
    insert(a, n);

    // Function calling
    printf("Original: ");
    disp(a, n);
    newAP(a, n);

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

void newAP(int *a, int n)
{
    // Fucntion of check weather given array is in AP or not
    // Property of AP there exist comman diffrence between all adjacent elements
    // Note that first two terms must be correct so that diffrence can be determined correctly
    
    int i, diff, count = 0, val, indx;
    diff = *(a + 1) - *(a);
    for (i = 1; i < n - 1; i++)
    {
        if (*(a + i + 1) - *(a + i) != diff)
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
