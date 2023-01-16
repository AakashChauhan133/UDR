#include <stdio.h>

int main()
{
    int a[20] = {0}, n, i, j, count;

    // Input
    printf("Enter the numbers of elements: ");
    scanf("%d", &n);
    printf("Enter all elements of array: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
    {
        count = 1;
        if (a[i] != -1)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] == a[j])
                {
                    count++;
                    a[j] = -1;
                }
            }
            printf("%d is %d times\n", a[i], count);
        }
    }

    return 0;
}