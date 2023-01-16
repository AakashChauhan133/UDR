/*
Nov 29, 2022
Author: Aakash Chauhan
Program: Print sum of given series
1 + (1+2) + (1+2+3) + ... + (1+2+3+...+n)
*/

#include <stdio.h>

int main()
{
	int sum = 0, sumi = 0, num;

	// Input
	printf("Enter the value of n: ");
	scanf("%d", &num);

	// Logic
	for (int i = 1; i <= num; i++)
	{
		sumi = sumi + i;
		sum = sum + sumi;
	}
	printf("%d\n", sum);

	return 0;
}
