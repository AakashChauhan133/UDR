/*
    Name: Aakash
    University Roll No: 2021931
    Section: M

    Problem statement:  Input n  in an array and replace the characters as per the given instructions:
                        1. Replace all capital vowels with symbol $.
                        2. Replace all the capital consonant with symbol #.
                        3. Replace all small letter vowels with symbol *.
                        4. Replace all the small letter consonant with symbol +.
                        5. Relace all special symbols with spaces.
                        6. Replace all spaces with digit 5.
                        7. Replace all digits with @
*/

#include <stdio.h>

int main()
{
    // Local decleration
    int i, n;
    char x;
    char s[20];

    // Input
    printf("********** INPUT **********\n");
    printf("Number of characters:");
    scanf("%d", &n);
    n = n + 1;
    printf("Enter Elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%c", &x);
        s[i] = x;
    }
    s[i] = '\0';

    for (i = 0; s[i] != '\0'; i++)
    {
        // Condtion for capital
        if (s[i] >= 65 && s[i] <= 90)
        {
            if (s[i] == 65 || s[i] == 69 || s[i] == 73 || s[i] == 79 || s[i] == 85)
            {
                s[i] = 36;
            }
            else
            {
                s[i] = 35;
            }
        }
        // Condition for small
        else if (s[i] >= 97 && s[i] <= 122)
        {
            if (s[i] == 97 || s[i] == 101 || s[i] == 105 || s[i] == 111 || s[i] == 117)
            {
                s[i] = 42;
            }
            else
            {
                s[i] = 43;
            }
        }
        // Condtion for digits
        else if (s[i] >= 48 && s[i] <= 57)
        {
            s[i] = 64;
        }
        // Condition for space
        else if (s[i] == 32)
        {
            s[i] = 53;
        }
        // Remainig are special character
        else
        {
            s[i] = 32;
        }
    }

    printf("********** OUTPUT **********\n");
    printf("%s", s);
    return 0;
}