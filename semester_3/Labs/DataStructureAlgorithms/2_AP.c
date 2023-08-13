/*
 *  Author: Aakash Chauhan
 *  Date: Aug 3, 2023
 *  Program to check weather an array is in AP or not
 */

#include <stdio.h>
#include <stdlib.h>

void insert(int *, int);
void disp(int *, int);
void checkAP(int *, int);

int main()
{
    // Local decleration
    int *a, n;
    // Dynamic allocation
    a = (int *)malloc(n * sizeof(int));
    // Input section
    printf("Check for AP\n");
    printf("Enter the size of array: ");
    scanf("%d", &n);

    insert(a, n);

    // Function calling
    printf("Original: ");
    disp(a, n);
    checkAP(a, n);

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

void checkAP(int *a, int n)
{
    // Fucntion of check weather given array is in AP or not
    // Property of AP there exist comman diffrence between all adjacent elements
    
    int i, diff;
    diff = *(a) - *(a + 1);
    for (i = 1; i < n - 1; i++)
    {
        if (*(a + i) - *(a + i + 1) != diff)
        {
            printf("Not an AP");
            return;
        }
    }
    printf("It is an AP");
}
