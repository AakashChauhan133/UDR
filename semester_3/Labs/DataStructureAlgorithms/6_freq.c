#include <stdio.h>
#include <stdlib.h>

void method1(int *, int);

int main()
{
    int *arr, n, i;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));

    printf("Enter the array\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter the element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    method1(arr, n);

    return 0;
}

void method1(int *nums, int n)
{
    int i, j, count = 0;
    for (i = 0; i < n; i++)
    {
        count = 1;
        if (nums[i] != -9)
        {
            for (j = i + 1; j < n; j++)
            {
                if (nums[j] == nums[i])
                {
                    count++;
                    nums[j] = -9;
                }
            }
            printf("Freq of %d is %d\n", nums[i], count);
        }
    }
}

