/*
Nov 15, 2022
Author: Aakash Chauhan
Program: Check for armstrong nunmber
*/

#include<stdio.h>
#include<math.h>

void main()
{
	// Local decleration
	int num, count = 0, temp, sum = 0;
	
	printf("Enter the number : ");
	scanf("%d", &num);
	temp = num;
	
	// Logic
	while (num != 0)
	{
		count = count + 1;
		num = num / 10;
	}
	num = temp;
	while (num != 0)
	{
		sum = sum + pow((num % 10), count);
		num = num / 10;
	}
	
	// checking 
	if (temp == sum)
		printf("This is armstrong number\n");
	else
		printf("This is not armstrong number\n");
}
