/*
    Author: Aakash Chauhan
    Date: January 8, 2023
    Problem: Insert 3 no in an array store addition in 4th position ,max value in 5 position, min in 6th position (input 1 2 3 and output:1 2 3 6 3 1)

*/

#include <stdio.h>

int main()
{
    // Local Decleration
    int a[10] = {0}, n, i;

    n = 3;
    // Input section
    printf("Enter all the elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // Logic for addition (4th pos ie. index 3)
    for (i = 0; i < n; i++)
        a[3] += a[i];
    n++;

    // Logic for max value (5th pos ie. index 4) and min value (6th pos ie. index 5)
    // Don't check 4th position we have to check only first 3 pos
    a[4] = a[5] = a[0];
    for (i = 1; i < n - 1; i++)
        (a[4] < a[i]) ? (a[4] = a[i]) : ((a[5] > a[i]) ? (a[5] = a[i]) : 0);
    n += 2;

    // Output Section
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    
    return 0;
}
