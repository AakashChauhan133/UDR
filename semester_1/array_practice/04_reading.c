/*  Author: Aakash Chauhan
    Date: January 5, 2023
    Problem: Declare an array of integer type. Initialise it at run time and print the array elements according to the following rules:-
    •	If the array element is 0(zero), do not display 0 and read the next array element .
    •	If the array element is > 0 then display the element and continue reading.
    •	If the array element is <0 then stop reading and displaying the array elements.

*/

#include <stdio.h>

int main()
{
    // Local Decleration
    int a[20], n, i;

    // Input Section
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    
    for (i = 0; i < n; i++)
    {
        if (a[i] < 0)
            break;
        else if (a[i] > 0)
            printf("%d ", a[i]);
    }

    return 0;
}