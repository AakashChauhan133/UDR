/*
    Author: Aakash Chauhan
    Date: March 1, 2023
    Problem: Check wearther given string is a substring of another array
            Note: These is no duplicate of substring
*/

#include <stdio.h>
void revW(char [], int, int);
int main()
{
    // Local decleration
    char str[100];
    int flag = 0, i, j, init;
    // Input Section
    printf("Enter the string: ");
    gets(str);

    // Logic
    i = 0;
    while (1)
    {
        if(str[i] == '\0')
            break;
        if (str[i] != 32)
            init = i;
        while (str[i] != 32 && str[i] != '\0')
            i++;
        revW(str, init, i - 1);
        i++;
    }
    puts(str);
    return 0;
}


void revW(char str[], int i, int j)
{
    char temp;
    while (i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++, j--;
    }
}
