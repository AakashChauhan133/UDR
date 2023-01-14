/*
    Author: Aakash Chauhan
    Date: January 5, 2023
    Problem: WAP in C to declare an array A of type float. Find out the ceil and floor of every element of the array. Store the ceil values in array C and the floor values in array D.
    •	Calculate the ceil and floor values by using the standard ceil() and floor() functions
    •	Calculate the ceil and floor values without using the ceil and floor functions.

*/

#include <stdio.h>
#include <math.h>

int celling(float);
int flloring(float);

int main()
{
    float a[20];
    int n, c[20], d[20];

    // Input Section
    printf("Enter the number of elements of array: ");
    scanf("%d", &n);
    printf("Enter all the decimal values of array: ");
    for (int i = 0; i < n; i++)
        scanf("%f", &a[i]);

    // Logic using math libraray
    printf("\nCeil values are : ");
    for (int i = 0; i < n; i++)
    {
        c[i] = ceil((double)a[i]);
        printf("%d ", c[i]);
    }
    printf("\nFloor values are : ");
    for (int i = 0; i < n; i++)
    {
        d[i] = floor((double)a[i]);
        printf("%d ", d[i]);
    }
    
    // Logic without using math libraray
    printf("\nCeil values are : ");
    for (int i = 0; i < n; i++)
    {
        c[i] = celling(a[i]);
        printf("%d ", c[i]);
    }
    printf("\nFloor values are : ");
    for (int i = 0; i < n; i++)
    {
        d[i] = flloring(a[i]);
        printf("%d ", d[i]);
    }
    

    return 0;
}

int celling(float num)
{
    return (int)(num + 1);
}
int flloring(float num)
{
    return (int)num;
}
