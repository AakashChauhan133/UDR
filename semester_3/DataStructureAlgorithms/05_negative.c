/*
 *  Author: Aakash Chauhan
 *  Date: Aug 7, 2023
 *  Move negative numbers to the right side of the array
 *  Complexity: O(n)
 */

#include <stdio.h>
#include <stdlib.h>

void insert(int *, int);
void disp(int *, int);
void method1(int *, int);

int main()
{
    // Local decleration
    int *a, n;
    // Dynamic allocation
    a = (int *)malloc(n * sizeof(int));
    // Input section
    printf("Move negative to left\n");
    printf("Enter the size of array: ");
    scanf("%d", &n);
    insert(a, n);

    // Function calling
    printf("Original: ");
    disp(a, n);
    method1(a, n);
    printf("Updated: ");
    disp(a, n);

    return 0;
}

void insert(int *a, int n)
{
    // Function to insert n elements in an array

    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter the element: ");
        scanf("%d", (a + i));
    }
}

void disp(int *a, int n)
{
    // Funtion to display first n elements of an array

    int i;
    for (i = 0; i < n; i++)
        printf("%d ", *(a + i));
    printf("\n");
}

void method1(int *a, int n)
{
    // function to move positive number to left (or negaitve number to right)
    // O(n) run a traversal and if postive is found then swap it with array[p] number and p++

    /*
        Visual Representaion of Algorithm

        array = {-1 2 -3 4 -5}
        p = 0;

        i = 0 
            inital state = final state:
                p
                +----+----+----+----+----+
                | -1 | +2 | -3 | +4 | -5 |
                +----+----+----+----+----+
                i

        i = 1
            initial state:
                p
                +----+----+----+----+----+
                | -1 | +2 | -3 | +4 | -5 |
                +----+----+----+----+----+
                        i
            in this itteration i != p is true => swap(-1, +2); p++
            final state:
                        p
                +----+----+----+----+----+
                | +2 | -1 | -3 | +4 | -5 |
                +----+----+----+----+----+
                        i
        i = 2
            intial state = final state:
                        p
                +----+----+----+----+----+
                | +2 | -1 | -3 | +4 | -5 |
                +----+----+----+----+----+
                            i
        
        i = 3
            initial state:
                        p
                +----+----+----+----+----+
                | +2 | -1 | -3 | +4 | -5 |
                +----+----+----+----+----+
                                  i
            i != p true 
            final state:
                            P
                +----+----+----+----+----+
                | +2 | +4 | -3 | -1 | -5 |
                +----+----+----+----+----+
                                  i
        i = 4
            initial state = final state:
                            P
                +----+----+----+----+----+
                | +2 | +4 | -3 | -1 | -5 |
                +----+----+----+----+----+
                                      i
        

    */

    int i, p, temp;
    p = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            if (i != p)
            {
                temp = a[i];
                a[i] = a[p];
                a[p] = temp;
            }
            p++;
        }
    }
}
