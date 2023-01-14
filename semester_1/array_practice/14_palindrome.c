/*
    Author: Aakash Chauhan
    Date: January 6, 2023
    Problem: WAP to count how many palindrome numbers is present in an array.
*/

#include <stdio.h>
int isPalindrome(int);

int main()
{
    // Local Decleration
    int a[20], n, i, count = 0;

    // Input section
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter all the elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    
    // Logic
    for (i = 0; i < n; i++)
    {
        if (isPalindrome(a[i]))
            count++;
    }

    // Output Section
    printf("The total number of palindrome in array is %d\n", count);
    return 0;
}

int isPalindrome(int num)
{
    int rev = 0, temp, ret;
    temp = num;

    while (num != 0)
    {
        rev = (rev * 10) + (num % 10);
        num /= 10;
    }
    (rev == temp) ? (ret = 1) : (ret = 0);
    return ret;
}