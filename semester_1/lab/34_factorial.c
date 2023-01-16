/*
Nov 15, 2022
Author: Aakash Chauhan
Program: Print the factorial of given number
*/

#include<stdio.h>
void main()
{
	int num, fact = 1;
	
	// Input
	printf("Enter number : ");
	scanf("%d", &num);
	
	// Logic
	for (int i = 1; i <= num; i++)
	{
		fact = fact * i;
	}
	
	// Output
	if (num >= 0)
		printf("\n\nFactorial of %d is %d\n\n", num, fact);
	else
		printf("\n\nFacorial for negative number is not defined\n\n");
}
