/*
Nov 15, 2022
Author: Aakash Chauhan
Program: HCF of two numbers
*/

#include<stdio.h>
#include<math.h>

void main()
{
	int a,
		b;
	
	// Input
	printf("Enter number : \n");
	scanf("%d%d", &a, &b);
	
	// Logic
	while (a != b)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	// Output
	printf("HCF is %d\n", a);
}
