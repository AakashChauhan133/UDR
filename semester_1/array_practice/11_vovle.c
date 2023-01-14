/*
    Author: Aakash Chauhan
    Date: January 6, 2023
    Problem: WAP to input character in array than find how many are vowel and consonant.
*/

#include <stdio.h>

int main()
{
    // Local Decleration
    char a[20];
    int i, countVow, countCon;
    countVow = countCon = 0;

    // Input section
    printf("Enter the charater array: ");
    scanf("%s", &a);

    // Logic
    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
        {
            countVow++;
        }
        else
        {
            countCon++;
        }
    }

    // Output Section
    printf("Number of Vowels : %d\n", countVow);
    printf("Number of Consonents : %d\n", countCon);

    return 0;
}