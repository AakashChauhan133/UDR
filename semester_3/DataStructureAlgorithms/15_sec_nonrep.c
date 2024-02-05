/*
 *  Author: Aakash Chauhan
 *  Date: Aug 14, 2023
 *  Print second non repeating element of array
 */

#include <stdio.h>

#define     MAX     10

// Function definition
void sec(int [], int);
void insert(int [], int);

int main()
{
    // Local decleration
    int arr[MAX], n;
    
    // Input section
    printf("Enter the size of array: ");
    scanf("%d", &n);
    
    // calling
    insert(arr, n);
    sec(arr, n);

    return 0;
}

void insert(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter the element: ");
        scanf("%d", (a + i));
    }
}

void sec(int arr[], int n)
{
    /*
        Algorithm:
            for i = 0 to n - 1
                f = 0
                for j = 0 to n - 1
                    In this loop check if found same as in index i but j is not i then tern on flag
                end for
                if flag is off this means that this is not repating value
                    count_of_non_repeating_elements increment by 1
                now exit the loop according to this count here count reqiured is 2
            end for
    */
    int i, j, f = 0, count = 0;
    for (i = 0; i < n; i++)
    {
        f = 0;
        for (j = 0; j < n; j++)
        {
            if (arr[i] == arr[j] && i != j)
            {
                f = 1;
            }
        }
        if (f == 0)
            count++;
        if (count == 2)
        {
            printf("Second non repeating is %d\n", arr[i]);
            break;
        }

    }

}
