/*
    Author: Aakash Chauhan
    Date: March 1, 2023
    Problem: Check wearther given string is a substring of another array
            Note: These is no duplicate of substring
*/

#include <stdio.h>
int main()
{
    // Local decleration
    char str[100], sub[100];
    int flag = 0, j;
    // Input Section
    printf("Enter the string: ");
    gets(str);
    printf("Enter the substring to search: ");
    gets(sub);

    // Logic
    for (int i = 0; str[i] != '\0'; i++)
    {
        j = 0;
        while (str[i + j] == sub[j])
        {
            if (sub[j + 1] == '\0')
            {
                flag = 1;
                break;
            }
            j++;
        }
        if (flag)
            break;
    }

    // Output Section
    if (flag)
        printf("Substring found");
    else
        printf("It is not substing");

    return 0;
}