/*
Nov 7, 2022
Author: Aakash Chauhan
Program: Sum of digits of numbers using while loop
*/

#include<stdio.h>
int main()
{
	// Local decleration
	int sum = 0;
	int num;
	
	// Input form user
	printf("Enter digit : ");
	scanf("%d", &num);
	
	// Loop
	while (num > 0)
	{
		sum = sum + num % 10;
		num = num / 10;
		
	}
	
	// Output
	printf("Sum of digits of %d is %d\n", num, sum);
	
	return 0;
}
