/*
    Author  :   Aakash Chauhan
    Date    :   Feb 16, 2024
    Given an unsorted array of integers, design an algorithm and implement a program to sort this array using selection sort. Your program should also find number of comparisons and number of swaps required.
 */

#include <stdio.h>
#define MAX 10

int comp = 0;
int swap = 0;

void create(int[], int);
void display(int[], int);
void sort(int[], int);
int main()
{
    int a[MAX], n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    create(a, n);
    sort(a, n);
    display(a, n);

    printf("swaps = > %d\ncomparison => %d\n", swap, comp);
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
    int i, j, min_indx, temp;

    for (i = 0; i < n - 1; i++)
    {
        min_indx = i;

        for (j = i + 1; j < n; j++)
        {
            comp++;
            if (a[min_indx] > a[j])
            {
                min_indx = j;
            }
        }
        swap++;
        temp = a[i];
        a[i] = a[min_indx];
        a[min_indx] = temp;
    }
}
