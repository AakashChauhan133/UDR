/*
    Author: Aakash Chauhan
    Date: January 6, 2023
    Problem: WAP to convert all characters of an array into its equivalent ASCII value.
    Example:     Input-ABC          Output- 65 66 67.

*/


#include <stdio.h>

int main()
{
    // Local Decleration
    char a[20];
    int i;

    // Input section
    printf("Enter the charater array: ");
    scanf("%s", &a);

    // Logic
    for (i = 0; a[i] != '\0'; i++)
        printf("%d ", a[i]);
    return 0;
}