/*
    Name: Aakash
    University Roll No: 2021931
    Section: M

    Problem statement: Write a user defined code to input 10 elements in an array (all distinct). Pass this array to the function and find the sum of first three smallest and first three largest elements present in the array. Compare the sum and return the smallest sum to calling function. Print the result.
*/

#include <stdio.h>

// Declearing functions
int input10(int *);
void sumOrder(int[]);

int main()
{
    int a[10];
    // Calling functions
    printf("************ INPUT ************\n");
    input10(a);

    printf("************ OUTPUT ************");
    sumOrder(a);
    return 0;
}

// Defining functions
int input10(int *a)
{
    int i;
    printf("Enter the elements of array: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
}

void sumOrder(int a[])
{
    int i, M1, M2, M3, m1, m2, m3, summ, sumM;
    M1 = M2 = M3 = -2147483648;
    m1 = m2 = m3 = 2147483647;

    for (i = 0; i < 10; i++)
    {
        if (a[i] > M1)
        {
            M3 = M2;
            M2 = M1;
            M1 = a[i];
        }
        else if (a[i] > M2)
        {
            M3 = M2;
            M2 = a[i];
        }
        else if (a[i] > M3)
        {
            M3 = a[i];
        }
        if (a[i] < m1)
        {
            m3 = m2;
            m2 = m1;
            m1 = a[i];
        }
        else if (a[i] < m2)
        {
            m3 = m2;
            m2 = a[i];
        }
        else if (a[i] < m3)
        {
            m3 = a[i];
        }
    }
    sumM = M1 + M2 + M3;
    summ = m1 + m2 + m3;
    printf("\nSum of first three smallest: %d\nSum of first three largest elements: %d\n", summ, sumM);
}