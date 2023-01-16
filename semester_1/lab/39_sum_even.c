/*
Nov 29, 2022
Author: Aakash Chauhan
Program: Print sum of odd and even numbers
*/

#include<stdio.h>

void main()
{
	int num,
		sumo = 0,
		sume = 0;
	
	printf("Enter number");
	scanf("%d", &num);
	
	// Logic
	for (int i = 0; i <= num; i++)
	{
		if (i % 2 == 0)
			sume = sume + i;
		else
			sumo = sumo + i;
	}
	
	printf("sum of odd is %d\nsum of even %d\n", sumo, sume);  
}
