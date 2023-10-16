/*
 *  Author: Aakash Chauhan
 *  Date: 7 Aug , 2023
 *  Find the frequency of each element in an array
 */

#include <stdio.h>
#include <stdlib.h>

// Function decleration
void insert(int *, int);
void freq(int *, int);

int main()
{
    // Local decleration
    int *arr, n, i;

    // Dynamic allocation
    arr = (int *)malloc(n * sizeof(int));

    // Input Section
    printf("Enter the size of array: ");
    scanf("%d", &n);
    insert(arr, n);

    // function calling
    freq(arr, n);

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

void freq(int *nums, int n)
{
    // Function to calculate frequency of each element
    // If element is counted then replace it with -9

    int i, j, count = 0;
    for (i = 0; i < n; i++)
    {
        count = 1;
        if (nums[i] != -9)
        {
            for (j = i + 1; j < n; j++)
            {
                if (nums[j] == nums[i])
                {
                    count++;
                    nums[j] = -9;   // Counted then replace with -9
                }
            }
            printf("Freq of %d is %d\n", nums[i], count);
        }
    }
}