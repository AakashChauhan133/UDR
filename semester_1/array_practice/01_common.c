/*
    Author: Aakash Chauhan
    Date: January 5, 2023
    Problem: WAP in C to initialise two arrays A and B and print the elements which are common to both the arrays.
*/

#include <stdio.h>

int sort(int[], int);

int main()
{
    // Local decleration
    int a[20], b[20], m, n, i, j;

    // Input section
    printf("Enter the number of elements of matrix 1: ");
    scanf("%d", &n);
    printf("Enter all the elements of matrix 1: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter the number of elements of matrix 2: ");
    scanf("%d", &m);
    printf("Enter all the elements of matrix 2: ");
    for (i = 0; i < m; i++)
        scanf("%d", &b[i]);

    // Logic Section
    sort(a, n);
    sort(b, m);
    i = j = 0;
    
    while (i < n || j < m)
    {
        (a[i] == b[j]) ? (printf("%d ", a[i]), i++, j++) : ((a[i] < b[j]) ? i++ : j++);
    }

    return 0;
}

int sort(int nums[], int numsSize)
{
    int temp;
    for (int i = 0; i < numsSize - 1; i++)
    {
        for (int j = 0; j < numsSize - i - 1; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }
}