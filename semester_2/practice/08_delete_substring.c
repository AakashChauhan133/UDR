/*
    Author: Aakash Chauhan
    Date: April 16, 2023
    Problem: Delete a substring from a string
*/

#include <stdio.h>

int main()
{
    // Local declrearion
    int l, i, j, f;
    char s[100], sub[100];

    // Input section
    printf("Enter the string: ");
    gets(s);
    printf("Enter the substring: ");
    gets(sub);

    // Logic
    // find and delete if found then delete
    for (l = 0; sub[l] != 0; l++)
        ; // To find length of substring

    for (i = 0; s[i] != 0; i++)
    {
        f = 1;
        if (s[i] == sub[0])
        {
            for (j = 1; sub[j] != 0; j++)
                if (s[i + j] != sub[j])
                {
                    f = 0;
                    break;
                }
            // if sting is found then delete
            if (f == 1)
            {
                for (j = i; s[j + l] != 0; j++)
                    s[j] = s[j + l];
                s[j] = 0;
                i--;
            }
        }
    }
    puts(s);
    return 0;
}
