/*
Nov 6, 2022
Author: Aakash Chauhan
Program: Arrange 3 numbers in assending order
*/

#include<stdio.h>
int main ()
{
	//local decliraton
	int a, b, c;
	
	//Input
	printf("Enter three numbers\n");
	scanf("%d%d%d", &a, &b, &c);
	
	//Logic
	if (c > a && c > b && b > a)
	{
		printf("a < b < c\n");
	}
	else if (c > a && c > b && b < a)
	{
		printf("b < a < c\n");
	}
	else if (a > b && a > c && c > b)
	{
		printf("b < c < a\n");
	}
	else if (a > b && a > c && c < b)
	{
		printf("c < b < a\n");
	}
	else if (b > a && b > c && a > c)
	{
		printf("c < a < b\n");
	}
	else // one conditon left (b > a && b > c && c > a)
	{
		printf("a < c < b\n");
	}
}