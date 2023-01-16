/*
Nov 7, 2022
Author: Aakash Chauhan
Program: Average of 10 Numbers using for loops
*/

#include<stdio.h>
int main ()
{
	// Local decleration
	float sum = 0, num;
	int i;
	
	// Loop
	for (i = 1; i <= 10 ; i++)
	{
		printf("Enter variable number %d : ", i);
		scanf("%f", &num);
		
		sum = sum + num;
	}
	
	// Output with average = sum/10
	printf("\nAverage of 10 numbers are %f\n", sum/10);
	
	return 0;
}
