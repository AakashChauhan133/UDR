/*
 *   Author: Aakash Chauhan
 *   Date: March 21, 2023
 * 
 *   Program: Insert a substring using pointers
 */

#include <stdio.h>

int main()
{
    // Local decleration
    int i, j, pos;
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

    printf("Enter the position to insert: ");
    scanf("%d", &pos);

    // Logic
    for (i = i; i >= 0; i--)
    {
        *(p + i + j) = *(p + i);
        if (pos - 1 == i)
        {
            for (j = 0; *(q + j) != 0; j++)
            {
                *(p + i + j) = *(q + j);
            }
            break;
        }
    }

    // Output Section
    for (j = 0; s[j] != 0; j++)
        printf("%c", s[j]);

    return 0;
}
