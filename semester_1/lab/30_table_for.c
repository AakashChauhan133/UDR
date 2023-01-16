/*
Nov 7, 2022
Author: Aakash Chauhan
Program: Print multiplication table of given number
*/

#include<stdio.h>

int main()
{
	// Local decleration
	int num;
	
	// Input
	printf("Which table you want : ");
	scanf("%d", &num);
	
	printf("\n\nTABLE OF %d\n\n", num);
	
	// Loop
	for (int i = 1; i <= 10 ; i++)
	{
		printf("%d * %d = %d\n", num, i, num * i);
	}
	
	return 0;
}
