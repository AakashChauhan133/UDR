#include <stdio.h>
#include <stdlib.h>

#define     MAX     10

void sort(int [], int [], int, int);
void merge(int [], int [], int, int, int);

int main()
{
    int a[MAX], temp[MAX];
    int n, i;
    printf("Enter the number of elements(max 10): ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter the element at %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    sort(a, temp, 0, n - 1);

    printf("\nSorted Data: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}


void sort(int a[], int temp[], int lb, int ub)
{
    int mid;
    if (lb < ub)
    {
        mid = (lb + ub)/2;
        sort(a, temp, lb, mid);
        sort(a, temp, mid + 1, ub);
        merge(a, temp, lb, mid, ub);
    }
}

void merge(int a[], int temp[], int lb, int mid, int ub)
{
    int left_end = mid, left_begin = lb, k = lb, i;

    while (left_begin <= left_end && mid+1 <= ub)
    {
        if (a[left_begin] < a[mid + 1])
        {
            temp[k++] = a[left_begin++];
        }
        else
        {
            temp[k++] = a[mid+ 1];
            mid++;
        }
    }
    while (left_begin <= left_end)
    {
        temp[k++] = a[left_begin++];
    }
    while (mid+1 <= ub)
    {
        temp[k++] = a[mid+1];
        mid++;
    }
    for (i = 0; i <= ub; i++)
    {
        a[i] = temp[i];
    }
}
