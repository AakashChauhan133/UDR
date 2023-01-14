/*
    Author: Aakash Chauhan
    Date: January 5, 2023
    Problem: WAP in C to declare and initialise an array A to {5,6,7,5,4,5,7,4,4}.The program should print the duplicate elements only once. Your program should display 5,6,7,4.You should not modify the array elements.
*/

#include <stdio.h>

int main()
{
    // Local Decleration
    int a[20] = {5,6,7,5,4,5,7,4,4}, n = 9;

    /*
    // Input section
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter all the elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    */
    // Logic
    int temp[100] = {0}, max = a[0];
    for (int i = 1; i < n; i++)
        (a[i] > max) ? (max = a[i]) : 0;
    
    for (int i = 0; i < n; i++)
        temp[a[i]]++;

    for (int i = 0; i <= max; i++)
    {
        if (temp[i] >= 1)
            printf("%d ", i);
    }
    return 0;
}