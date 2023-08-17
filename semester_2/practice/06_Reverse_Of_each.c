/*
    Author: Aakash Chauhan
    Date: March 16, 2023
    Problem: Reverse the each word of a string
        Input: This is a pen
        Output: pen a is This
    Note: In this solution iam disturbuing the original string
*/

#include <stdio.h>
int main()
{
    // Local decleration
    char s[100], ans[100];
    int i, j, len, k;

    // Input Section
    printf("Enter the string\n");
    gets(s);

    // Logic
    for (len = 0; s[len] != '\0'; len++)
        ;
    k = 0;
    j = len;
    s[len] = 32;
    for (i = len - 1; i >= 0; i--)
    {
        if (s[i] == 32 && s[i + 1] != 32 && s[i + 1] != '\n')
        {
            for (int x = i + 1; x <= j; x++)
                ans[k++] = s[x];
            j = i;
        }
    }

    // Loop for copying first letter
    for (i = 0; s[i] != 32; i++)
    {
        if (s[i] == 32)
            break;
        ans[k++] = s[i];
    }
    ans[k] = '\0';

    // Output Section
    puts(ans);

    return 0;
}