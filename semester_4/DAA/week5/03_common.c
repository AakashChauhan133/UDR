#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a1[100] = {0};
    int a2[100] = {0};
    int n1, n2;

    printf("Enter the size of array: ");
    scanf("%d", &n1);

    printf("Enter the array\n");
    for (int i = 0; i < n1; i++)
        scanf("%d", &a1[i]);
    printf("Enter the size of array: ");
    scanf("%d", &n2);

    printf("Enter the array\n");
    for (int i = 0; i < n2; i++)
        scanf("%d", &a2[i]);
    
    int i = 0, j = 0;

    while (i < n1 && j < n2)
    {
        if (a1[i] == a2[j])
        {
            printf("\n%d", a1[i]);
            i++, j++;
        }
        else if (a1[i] > a2[j])
            j++;
        else if (a1[i] < a2[j])
            i++;
    }
    

    return 0;
}