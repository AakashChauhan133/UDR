/*
Nov 6, 2022
Author: Aakash Chauhan
Program:	f(x) = x**2 + 2			{0 <= 0 <= 10}
			f(x) = x**2 + 2*x		{11 <= 0 <= 20}
			f(x) = x**3 + 2*x**2	{21 <= 0 <= 30}
			else f(x) = 0
*/

#include <stdio.h>
#include <math.h>

int main()
{
	// Local decliration
	int x, y;

	// Input
	printf("Enter the value of x: ");
	scanf("%d", &x);

	// Logic
	if (x >= 0 && x <= 10)
	{
		y = pow(x, 2) + 2;
		printf("y = %d\n", y);
	}
	else if (x >= 11 && x <= 20)
	{
		y = pow(x, 2) + (2 * x);
		printf("y = %d\n", y);
	}
	else if (x >= 21 && x <= 30)
	{
		y = pow(x, 3) + (2 * pow(x, 2));
		printf("y = %d\n", y);
	}
	else
	{
		y = 0;
		printf("y = %d\n", y);
	}
	return 0;
}