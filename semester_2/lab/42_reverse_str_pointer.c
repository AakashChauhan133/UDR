/*
 *   Author: Aakash Chauhan
 *   Date: March 21, 2023
 *
 *   Program: Reverse a string using pointers
 */

#include <stdio.h>

int main()
{
    // Local decleration
    int i, j;
    char s[100];
    char *p, temp;
    p = s;

    // Input Section
    printf("Enter the string: ");
    j = 0;
    while (1)
    {
        scanf("%c", (p + j));
        if (*(p + j) == '\n')
            break;
        j++;
    }
    *(p + j) = '\0';

    j = j - 1;
    i = 0;
    // Logic
    while (i < j)
    {
        temp = *(p + i);
        *(p + i) = *(p + j);
        *(p + j) = temp;
        i++, j--;
    }

    // Output Section
    for (j = 0; s[j] != 0; j++)
        printf("%c", s[j]);

    return 0;
}
