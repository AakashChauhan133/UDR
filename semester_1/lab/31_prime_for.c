/*
Nov 7, 2022
Author: Aakash Chauhan
Program: Check weather number is prime 
*/

#include<stdio.h>

int main()
{
	// Local decleration
	int num, flag = 0;
	
	// Input
	printf("Enter number to check for prime : ");
	scanf("%d", &num);
	
	// Loop
	for (int i = 2; i <= num/2; i++)
	{
		if (num%i == 0)
		{
			flag++;
		}
	}
	
	// Checking flag
	if (flag == 1)
	{
		printf("This is prime number\n");
	}
	else
	{
		printf("This is not prime number\n");
	}
	
	return 0;
}
