/*
Nov 7, 2022
Author: Aakash Chauhan
Program: Average of 10 Numbers using do while loops
*/

#include<stdio.h>

int main ()
{
	// Local decleration
	float sum = 0, num;
	int i = 1;
	
	// Loop
	do
	{
		printf("Enter variable number %d : ", i);
		scanf("%f", &num);
		
		sum = sum + num;
		i++;
	}while (i <= 10);
	
	// Output
	printf("\nAverage of 10 numbers are %f\n", sum/10);
	
	return 0;
}
