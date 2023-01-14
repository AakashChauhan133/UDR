/*
    Author: Aakash Chauhan
    Date: January 8, 2023
    Problem: Program to insert element( integer) in  an array and store square of each element in another array;(input 1 2 3 4 5 and output: 1 4 9 16 25)
*/

#include <stdio.h>

void insert(int[], int *, int, int);

int main()
{
    // Local Decleration
    int a[20], n, i, x, pos;

    // Input section
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter all the elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter the number you want to insert also give position: ");
    scanf("%d%d", &x, &pos);
    insert(a, &n, x, pos);

    for (i = 0; i < n; i++)
        printf("%d ", a[i] * a[i]);

    return 0;
}

void insert(int nums[], int *numsSize, int element, int pos)
{
    if (pos > *numsSize)
        return;
    int i;
    for (i = *numsSize; i > pos - 1; i--)
        nums[i] = nums[i - 1];
    nums[i] = element;
    (*numsSize)++;
}