/*
    Author: Aakash Chauhan
    Date: January 6, 2023
    Problem: C Program to Find the two Elements such that their Sum is Closest to Zero
*/

#include <stdio.h>

int sort(int[], int);

int main()
{
    // Local Decleration
    int a[20], n, i;

    // Input section
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter all the elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // Logic
    sort(a, n);

    printf("Second Largest = %d\nSecond smallest = %d", a[n - 2], a[1]);
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