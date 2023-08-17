/*
    Author: Aakash Chauhan
    Date: January 6, 2023
    Problem: WAP in C to declare two array A and B. Initialise A to {2,5,8,4,5,10,11,6} and initialise B to {101,120,144,11,3}.Declare an array C. Do as per the following steps:-
    •	Store the even numbers of array A in C
    •	Sore the even numbers of array B in C
    Array C should have the following elements:- {2,8,4,10,6,120,144}
*/

#include <stdio.h>

int main()
{
    // Local Decleration
    int n, m, i, j, c[20], len;

    int a[20] = {2, 5, 8, 4, 5, 10, 11, 6};
    n = 8;
    int b[20] = {101, 120, 144, 11, 3};
    m = 5;

    // Step 1 : Store the even numbers of array A in C
    for (i = j = 0; i < n; i++)
    {
        (a[i] % 2) ? 0 : (c[j++] = a[i]);
    }
    // Step 2 : Sore the even numbers of array B in C
    for (i = 0; i < m; i++)
    {
        (b[i] % 2) ? 0 : (c[j++] = b[i]);
    }
    len = j;

    // Output Section
    for (i = 0; i < len; i++)
        printf("%d ", c[i]);

    return 0;
}