/*
Nov 29, 2022
Author: Aakash Chauhan
Program: Print product of digits of a number

Test case :
Input 112 -> Output 2
Input 102 -> Output 0
Input -123 -> Output -6
*/

#include <stdio.h>
int main()
{
    int prod = 1, num, temp;

    printf("Enter the value of n: ");
    scanf("%d", &num);
    
    temp = num;
    (num < 0) ? num *= -1 : 0;

    while (num != 0)
    {
        prod = prod * (num % 10);
        num = num / 10;
    }

    (temp < 0) ? prod *= -1 : 0;

    printf("%d", prod);

	return 0;
}
