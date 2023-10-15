#include <stdio.h>
#include <stdlib.h>

void method1(int *, int);
void method2(int *, int);
void method3(int *, int);

void swap(int *, int *);
void disp(int *, int);

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


    method3(arr, n);
    disp(arr, n);

    return 0;
}


void method1(int *nums, int n)
{
    int i, j = 0;

    for (i = n; i >= 0; i--)
    {
        if (nums[i] < 0)
        {
            for (j = i; j < n - 1; j++)
            {
                swap(&nums[j], &nums[j + 1]);
            }
        }
    }

}
void method2(int nums[], int n)
{
    int i, j = 0;

    for (i = 0; i < n; i++)
    {
        if (nums[i] > 0)
        {
            if (i != j)
                {
                    swap(&nums[i], &nums[j]);
                }
            j++;
         }

     }
}


void method3(int *nums, int n)
{
    int i = 0, j = n - 1;
    while (i > j)
    {
        if (nums[i] < 0 && nums[j] > 0)
        {
            swap(&nums[i], &nums[j]);
            i++, j--;
        }
        else if (nums[i] > 0 && nums[j] > 0)
        {
            i++;
        }
        else if (nums[i] < 0 && nums[j] < 0)
        {
            j--;
        }
        else if (nums[i] > 0 && nums[j] < 0)
        {
            i++, j--;
        }
    }
    disp(nums, n);
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void disp(int *nums, int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", nums[i]);
}
