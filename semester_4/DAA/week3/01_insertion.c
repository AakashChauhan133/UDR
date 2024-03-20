/*
    Author  :   Aakash Chauhan
    Date    :   Feb 16, 2024
    Given an unsorted array of integers, design an algorithm and a program to sort the array using insertion sort. Your program should be able to find number of comparisons and shifts ( shifts total number of times the array elements are shifted from their place) required for sorting the array.
 */

#include <stdio.h>
#define MAX 10

int comp = 0; 
int shift = 0;

void create(int [], int);
void display(int [], int);
void sort(int [], int);
int main()
{
    int a[MAX], n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    create(a, n);
    sort(a, n);
    display(a, n);

    printf("shifts = > %d\ncomparison => %d\n", shift, comp);
    return 0;
}

void create(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter the value at position %d : ", i + 1);
        scanf("%d", &a[i]);
    }
    display(a, n);
}
void display(int a[], int n)
{
    int i;
    printf("Array elements: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void sort(int a[], int n)
{
    int i, j , temp;
    for (i = 1; i < n; i ++)
    {
        temp = a[i];
        j = i - 1;

        shift++;
        while (j >= 0 && temp < a[j])
        {
            shift++, comp++;
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }
}

