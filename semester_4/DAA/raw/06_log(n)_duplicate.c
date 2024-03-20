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

    prev_l = l = 0;
    prev_r = r = n;
    count = 0;
    while (1)
    {
        mid = (l + r)/2;
        if (l > r)
            break;
        if (arr[mid] < key)
        {
            // Key is less than mid value go to right hand side
            prev_l = l;
            l = mid + 1;
        }
        else if (arr[mid] > key)
        {
            // Key is greater then mid value go to left hand side
            prev_r = r;
            r = mid - 1;
        }
        else
        {
            // Found and run iteration both side.
            for (j = prev_l; j < prev_r; j++)
            {
                if (arr[j] == key)
                {
                    count++;
                }
            }
            printf("FOUND");
            break;
        }

    }
    
    printf("Count = %d\n", count);
    return 0;
}