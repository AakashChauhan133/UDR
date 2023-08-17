/*
    Author: Aakash Chauhan
    Date: March 1, 2023
    Problem: Count the frequency of a sub string in a string
*/

#include <stdio.h>
int main()
{
    // Local decleration
    char str[100], sub[100];
    int count = 0, j;
    // Input Section
    printf("Enter the string: ");
    gets(str);
    printf("Enter the substring to search: ");
    gets(sub);
    // Logic
    for (int i = 0; str[i] != '\0'; i++)
    {
        j = 0;
        while (str[i + j] == sub[j] && str[i + j] != '\0')
        {
            if (sub[j + 1] == '\0')
            {
                count++;
            }
            j++;
        }
    }
    printf("%d", count);

    return 0;
}