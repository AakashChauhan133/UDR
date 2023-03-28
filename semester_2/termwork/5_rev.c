/*
 *  Name: Aakash
 *  University Roll No: 2021931
 *  Section: M
 *  Problem statement: Write a C function reverse to reverse the digits of a number using pointer which receives number as an argument. In calling function(main) check that the inputted number is palindrome or not.
 */

#include <stdio.h>

void reverse(int, int *);

int main()
{
    // Local decleration
    int num, rev;

    // Input Section
    printf("\n/********** Input**********/\n");
    printf("Enter number: ");
    scanf("%d", &num);

    // Calling function and checking for palindrome
    reverse(num, &rev);

    printf("\n/********** OUTPUT **********/\n");
    printf("Reverse: %d\n", rev);
    if (num == rev)
        printf("Valid Palindrome\n");
    else
        printf("Not a Palindrome\n");

    return 0;
}

void reverse(int num, int *rev)
{
    *rev = 0;
    while (num)
    {
        *rev = (*rev * 10) + num % 10;
        num /= 10;
    }
}