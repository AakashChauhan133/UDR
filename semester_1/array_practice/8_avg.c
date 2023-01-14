/*
    Author: Aakash Chauhan
    Date: January 6, 2023
    Problem: WAP in C that will prompt for and receive 10 integers from the user, and count the number of integers whose value is less than the average value of the integers. Your program is to display the average integer value and the count of integers less than average.
*/

#include <stdio.h>

int main()
{
    // Local Decleration
    int n = 10, i;
    float avg = 0.00, a[20];

    // Input section
    printf("Enter all the elements: ");
    for (int i = 0; i < n; i++)
        scanf("%f", &a[i]);

    // Logic for average
    for (i = 0; i < n; i++)
        avg += a[i];
    avg /= (float)n;
    printf("\naverage = %f\n", avg);

    // checking for less than avg
    for (i = 0; i < n; i++)
        if (a[i] < avg)
            printf("%.2f ", a[i]);

    return 0;
}