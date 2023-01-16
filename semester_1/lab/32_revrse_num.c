/*
Nov 15, 2022
Author: Aakash Chauhan
Program: Reverse the number
*/

#include<stdio.h>
void main()
{
	int num, back;
	back = 0;
	
	// Input
	printf("Enter number : ");
	scanf("%d", &num);
	
	// Logic
	while (num != 0)
	{
		back = (back * 10) + (num % 10);
		num = num / 10;
	}
	
	// Output
	printf("\nBefore revrese number is %d\nAfter reversing number is %d\n\n", num, back);
}
