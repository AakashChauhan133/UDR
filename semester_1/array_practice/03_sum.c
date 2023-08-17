/*
    Author: Aakash Chauhan
    Date: January 5, 2023
    Problem: Declare an array and initialise it to {10, 20.89, 44, 23, -12, -67, -12.34, 78}.WAP in C to find the sum of all elements except the negative ones.
*/

#include <stdio.h>

int main()
{
    float a[20] = {10, 20.89, 44, 23, -12, -67, -12.34, 78}, sum;
    int n = 8;
    
    // Logic
    sum = 0.0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
            sum += a[i];
    }
    printf("Sum = %f", sum);

    return 0;
}