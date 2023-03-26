/*
 *   Author: Aakash Chauhan
 *   Date: March 21, 2023
 *
 *   Program: Delete a substring using pointers
 */

#include <stdio.h>

int main()
{
    // Local decleration
    int i, j, k, flag;
    char s[100], sub[100];
    char *p, *q;
    p = s;
    q = sub;

    // Input Section
    printf("Enter the string: ");
    i = 0;
    while (1)
    {
        scanf("%c", (p + i));
        if (*(p + i) == '\n')
            break;
        i++;
    }
    *(p + i) = '\0';

    printf("Enter the substring: ");
    j = 0;
    while (1)
    {
        scanf("%c", (q + j));
        if (*(q + j) == '\n')
            break;
        j++;
    }
    *(q + j) = '\0';

    // Logic
    for (i = i; i >= 0; i--)
    {
        flag = 1;
        if (*(p + i) == *q)
        {
            for (j = 1; *(q + j) != 0; j++)
            {
                if (*(p + i + j) != *(q + j))
                {
                    flag = 0;
                    break;
                }
            }
            if (flag)
            {
                for (k = i; *(p + k) != 0; k++)
                    *(p + k) = *(p + k + j);
            }
        }
    }

    // Output Section
    for (j = 0; s[j] != 0; j++)
        printf("%c", s[j]);

    return 0;
}
