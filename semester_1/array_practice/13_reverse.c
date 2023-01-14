/*
    Author: Aakash Chauhan
    Date: January 6, 2023
    Problem: WAP to input elements in an array than find reverse each element of the array.
    Example	
    Input   123	345	5678 543 321 678 890 1234
    Output  321	543	8765 345 123 876 098 4321
*/

#include <stdio.h>

int Rev(int);

int main()
{
    // Local Decleration
    int a[20], n, i;

    // Input section
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    
    // Logic
    for (i = 0; i < n; i++)
    {
        printf("%d ", Rev(a[i]));
    }

    return 0;
}

int Rev(int num)
{
    int ret = 0;

    while (num != 0)
    {
        ret = (ret * 10) + (num % 10);
        num /= 10;
    }
    return ret;
}