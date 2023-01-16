/*
Nov 7, 2022
Author: Aakash Chauhan
Program: Average of 10 Numbers using while loops
*/

#include<stdio.h>
int main ()
{
	// Local decleration
	float sum = 0, num;
	int i = 1;
	
	// Loop
	while (i <= 10)
	{
		printf("Enter variable number %d : ", i);
		scanf("%f", &num);
		
		sum = sum + num;
		i++;
	}
	// Output
	printf("\nAverage of 10 numbers are %f\n", sum/10);
	
	return 0;
}
