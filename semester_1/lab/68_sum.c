#include <stdio.h>

int main()
{
    int a[20] = {0}, b[20] = {0}, s[40] = {0}, n1, n2, i;

    // Input
    printf("Enter the numbers of elements: ");
    scanf("%d%d", &n1, &n2);
    printf("Enter all elements of array 1: ");
    for (i = 0; i < n1; i++)
        scanf("%d", &a[i]);
    printf("Enter all elements of array 2: ");
    for (i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    (n1 > n2) ? (n2 = n1) : (n1 = n2);
    for (i = 0; i < n1; i++)
    {
        s[i] = a[i] + b[i];
        printf("%d ", s[i]);
    }

    return 0;
}