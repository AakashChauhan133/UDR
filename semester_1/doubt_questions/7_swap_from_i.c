/*
    Author: Aakash Chauhan
    Date: January 11, 2023
    Reverse next 5 from given index
*/

#include <stdio.h>

int main()
{
    int a[30], n, i, j, index, temp;

    // Input
    printf("Enter the numbers of elements in array: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter the index that you want to reverse : ");
    scanf("%d", &index);

    // Logic
    i = index;
    j = index + 5;
    while (i < j)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }

    // Output
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}