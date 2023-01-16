#include <stdio.h>

int main()
{
    int a[20], b[20], res[40] , n1, n2, i, k;

    // Input
    printf("Enter the numbers of elements: ");
    scanf("%d%d", &n1, &n2);
    printf("Enter all elements of array 1: ");
    for (i = 0; i < n1; i++)
        scanf("%d", &a[i]);
    printf("Enter all elements of array 2: ");
    for (i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    // Logic
    k = 0;
    for (i = 0; i < n1; i++)
        res[k++] = a[i];
    for (i = 0; i < n2; i++)
        res[k++] = b[i];

    // Output
    for (i = 0; i < (n1+n2); i++)
        printf("%d ", res[i]);

    return 0;
}