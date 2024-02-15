#include <stdio.h>
#include <math.h>

#define     MAX     10

int main()
{
    int arr[MAX];
    int n, i, key, mid, l, r,  prev_l, prev_r, j, count;

    // INPUT SECTION
    printf("ENTER THE SIZE OF ARRAY: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("ENTER THE KEY: ");
    scanf("%d", &key);

    l = 0;
    r = n-1;
    count = 0;
    while (1)
    { 
        mid = (l + r)/2;
        if (l > r)
            break;
        if (arr[mid] == key)
        {
            count++;
            j = mid - 1;
            while (1)
            {
                // Run until value do not change in right
                if (arr[j] != key)
                    break;
                count++;
                j--;
            }
            j = mid + 1;
            while (1)
            {
                // Run until value do not change in left
                if (arr[j] != key)
                    break;
                count++;
                j++;
            }
            break;
        }
        else if (arr[mid] < key)
        {
            // Key is less than mid value go to right hand side
            l = mid + 1;
        }
        else if (arr[mid] > key)
        {
            // Key is greater then mid value go to left hand side
            r = mid - 1;
        }
    }
    
    printf("Count = %d\n", count);
    return 0;
}