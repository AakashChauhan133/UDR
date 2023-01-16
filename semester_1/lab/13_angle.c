/*
Nov 6, 2022
Author: Aakash Chauhan
Program: To find third angle of a triangle
*/

#include<stdio.h>
int main()
{
	//Local decleration
	int a, b, c;
	
	//Input
	printf("Enter first angle: ");
	scanf("%d", &a);
	printf("Enter second angle: ");
	scanf("%d", &b);
	
	
	//Logic
	c = 180-(a+b);
	
	//Output
	printf("The third angle is %d\n", c);
	
	return 0;
	
}