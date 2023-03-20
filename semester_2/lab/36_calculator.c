/*
	Author: Aakash Chauhan
	Date: March 20, 2023
	Program: Add, sub, multiply, divide using pointers
*/

#include <stdio.h>

int main()
{
	// Local Decleration
	int x, y;
	int *p, *q;
	p = &x;
	q = &y;
	
	// Input Section
	printf("Enter two values\n");
	scanf("%d%d", p, q);
	
	// Logic using pointer
	printf("sum = %d\n", *p + *q);
	printf("Diff = %d\n", *p - *q);
	printf("Product = %d\n", *p * *q);
	printf("Division = %f\n", ((float)*p / (float)*q));
	
	return 0;
}	
