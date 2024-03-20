#include <stdio.h>
#include <stdlib.h>

#define MAX 200

void sort(int arr[], int n, int k);
void disp(int arr[], int n);

int main()
{
    int arr[MAX] = {0};
    int n, k;
    int i;

    // Input section
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter the value of k: ");
    scanf("%d", &k);

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // calling function
    sort(arr, n, k);

    return 0;
}

void sort(int arr[], int n, int k)
{
    int *map = NULL;
    int i, count_first = 0, count_last = 0;
    int max = arr[0];
    int ind1 = 0;
    int ind2 = 0;

    for (i = 1; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    map = (int *)calloc(max + 1, sizeof(int));
    

    for (i = 0; i < n; i++)
    {
        map[arr[i]]++;
    }
    
    // to get minimum element
    for (i = 0; i < max + 1; i++)
    {
        if (map[i] >= 1)
        {
            break;
        }
    }
    
    for (i; i < max + 1; i++)
    {
        // kth smallest from first => count non zero from first till count != kth - 1;
        // kth largest from last => count non zero from n - kth - 1;

        /*
            size of array = 10; k = 2
            smallest at 1 = k - 1
            largest at 10 - 2 = 8 = n - k - 1
        */
        if (map[i] > 0 && count_first <= k - 1)
        {
            ind1 = i;
            count_first++;
        }
        if (map[i] > 0 && count_last <= n - k)
        {
            ind2 = i;
            count_last++;
        }
    }
    printf("\nKth from first = %d\nKth from last = %d\n", ind1, ind2);
}

void disp(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
