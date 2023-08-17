/*
    Author: Aakash Chauhan
    Date: January 5, 2023
    Problem: Declare an array of integer type. It has 10 elements out of which one is greater by 5 than another element.WAP in C to find both the elements.
*/

#include <stdio.h>

int main()
{
    // Local decleration
    int a[20], ref;
    ref = 5;

    // Input section
    for (int i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    
    // Logic Section
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (a[i] - a[j] == 5 || a[i] - a[j] == -5)
            {
                printf("\nset is %d %d", a[i], a[j]);
            }
        }
        
    }

    return 0;
}
