#include <stdio.h>

#define     MAX     10

void sec(int [], int);
void insert(int [], int);

int main()
{
    int arr[MAX], n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
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
