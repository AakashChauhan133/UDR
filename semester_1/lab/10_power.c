/*
Nov 6, 2022
Author: Aakash Chauhan
Program: Use of power function
*/

#include<stdio.h>
#include<math.h>

int main()
{
	//local declaration
	float a, b, ans;
	
	//input
	printf("Enter the  value of base: ");
	scanf("%f", &a);
	printf("Enter the value for power: ");
	scanf("%f", &b);
	
	//Logic
	ans = pow(a, b);
	
	//Output
	printf("%f to the power %f is %f\n", a, b, ans);
	
	return 0;
}