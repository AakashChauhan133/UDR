/*
Dec 19, 2022
Author: Aakash Chauhan
Program: Insert number element in an array
*/

#include <stdio.h>

int main()

{
        int a[20], n, i, x, pos;

        // Input
        printf("Enter the numbers of elements: ");
        scanf("%d", &n);
        printf("Enter all elements: ");
        for (i = 0; i < n; i++)
                scanf("%d", &a[i]);

        printf("Enter the element and the position of the element: ");
        scanf("%d%d", &x, &pos);

        // Logic
        if (pos == 1)
        {
                for (i = n; i > 0; i--)
                {
                        a[i] = a[i - 1];
                }
                a[i] = x;
                n++;
        }
        else if (pos == n + 1)
        {
                a[n] = x;
                n++;
        }
        else
        {
                i = n;
                while (pos - 1 != i)
                {
                        a[i] = a[i - 1];
                        i--;
                }
                a[i] = x;
                n++;
        }

        // Display
        for (int i = 0; i < n; i++)
                printf("%d ", a[i]);

        return 0;
}
