/*
Nov 15, 2022
Author: Aakash Chauhan
Program: Check Weather number is prime or not using sqrt()
*/

#include<stdio.h>
#include<math.h>

int main()
{
	// Local decleration
	int num, flag = 0;
	
	// Input
	printf("Enter number to check for prime : ");
	scanf("%d", &num);
	
	// Loop
	for (int i = 2; i <= sqrt(num); i++)
	{
		if (num%i == 0)
		{
			flag++;
			break;
		}
	}
	
	// Checking flag
	if (flag == 1 || num == 1 || num == 0)
	{
		printf("This is not prime number\n");
	}
	else
	{
		printf("This is prime number\n");
	}
	
	return 0;
}
