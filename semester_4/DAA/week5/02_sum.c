#include <stdio.h>
#include <stdlib.h>

void sort(int arr[], int l, int r);
void merge(int arr[], int l, int m, int r);

int main()
{
    int arr[100] = {0};
    int n, i, j, key;
    int f = 0;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter the array\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    sort(arr, 0, n);
    i = 0; 
    j = n - 1;
    printf("Enter the key: ");
    scanf("%d", &key);
    while (i < j)
    {
        if (arr[i] + arr[j] == key)
        {
            printf("%d %d\n", arr[i], arr[j]);
            f = 1;
            break;
        }
        if (arr[i] + arr[j] > key)
        {
            j--;
        }
        else if (arr[i] + arr[j] < key)
        {
            i++;
        }
    }
    if (f == 0)
        printf("Not Found\n");

    return 0;
}



void sort(int arr[], int l, int r)
{
    int mid;
    if (l < r)
    {
        mid = (l + r) / 2;
        sort(arr, l, mid);     // call in left from mid
        sort(arr, mid + 1, r); // call in right from mid
        merge(arr, l, mid, r); // Merge both left sorted and right sorted
    }
}

void merge(int arr[], int l, int m, int r)
{
    int n1 = (m - l) + 1; // length of left sub array
    int n2 = (r - m);     // length of right sub array
    int i, j, k;
    int *L, *R;

    L = (int *)calloc(n1, sizeof(int));
    R = (int *)calloc(n2, sizeof(int));

    // Copy content to left sub array
    for (i = 0; i < n1; i++)
    {
        L[i] = arr[l + i];
    }

    // Copy the content to right sub array
    for (i = 0; i < n2; i++)
    {
        R[i] = arr[i + 1 + m];
    }

    i = j = 0;
    k = l;

    // Now insert assemby from sorted 2 array
    while (i < n1 && j < n2)
    {
        // Merge sorted
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            k++, i++;
        }
        else
        {
            arr[k] = R[j];
            k++, j++;
        }
    }

    // Now copy the remaing elements
    while (i < n1)
    {
        arr[k++] = L[i++];
    }
    while (j < n2)
    {
        arr[k++] = R[j++];
    }
}
