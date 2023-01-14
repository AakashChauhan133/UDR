/*
    Name: Aakash
    University Roll No: 2021931
    Section: M

    Problem statement: Input n numbers in an array and find the nearest lesser and nearest greater element than a given element.
    Example: a[] ={ 3,6,2,1,8,6,3,4,10,15}
    Let input x= 8
    Output: nearest lesser 6 nearest greater 10
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    // Local decleration
    int a[20], n, x, i;

    // Input
    printf("********** INPUT **********\n");
    printf("nmber of elements: ");
    scanf("%d", &n);
    printf("x: ");
    scanf("%d", &x);
    printf("Enter Elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Some initialisation
    int min, max, minD, maxD;
    min = -2147483647;
    max = 2147483647;
    minD = maxD = 2147483647;

    // Logic (checking minimum diffrence from given number)
    for (int i = 0; i <= n; i++)
    {
        if (x < a[i] && (a[i] - x) < maxD)
        {
            max = a[i];
            maxD = (a[i] - x);
        }
        else if (x > a[i] && (x - a[i]) < minD)
        {
            min = a[i];
            minD = (x - a[i]);
        }
    }
    printf("********** OUTPUT **********\n");
    printf("nearest lesser %d nearest greater %d\n", min, max);

    return 0;
}