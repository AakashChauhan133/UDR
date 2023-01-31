/*
    Author: Aakash Chauhan
    Date: January 30 2023
    Problem: Write a program to count frequency of each element in an array and then arrange them according to their frequency from higher to lower?
*/

#include <stdio.h>

int freq(int[], int);

int main()
{
    // Local decleration
    int a[20], ref[20], i, j, flag, n, temp1, temp2;

    // Input Section
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);
    printf("Enter all the elements of array\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // Logic
    for (int i = 0; i < n; i++)
    {
        flag = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                flag++;
                a[j] = a[n - 1];
                n--;
                j--;
            }
        }
        ref[i] = flag;
    }

    // Bubble sorting
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (ref[j] < ref[j + 1])
            {
                temp1 = a[j], temp2 = ref[j];
                a[j] = a[j + 1], ref[j] = ref[j + 1];
                a[j + 1] = temp1, ref[j + 1] = temp2;
            }
        }
    }
    // Output
    for (i = 0; i < n; i++)
    {
        printf("%d => %d\n", a[i], ref[i]);
    }
    return 0;
}
