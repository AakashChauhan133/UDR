/*
    Author: Aakash Chauhan
    Date: January 8, 2023
    Problem: Write a program to find and print all the leader elements in an array. A leader element is an element which is greater than all of its right hand side elements.
    Eg:- Array is of size [5], elements are 2,3,5,3,4. In this leader elements 5 and 4.

*/

#include <stdio.h>

int main()
{
    // Local Decleration
    int a[20] = {0}, n, i, j, flag;

    // Input section
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter all the elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // Logic
    for (i = 0; i < n; i++)
    {
        flag = 0;
        for (j = i; j < n; j++)
        {
            if (a[j] > a[i])
            {
                flag++;
                break;
            }
        }
        if (flag == 0)
            printf("%d ", a[i]);
    }

    return 0;
}