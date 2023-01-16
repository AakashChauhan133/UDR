/*
Nov 6, 2022
Author: Aakash Chauhan
Program: Print absolute value of given number
*/

#include<stdio.h>
int main()
{
	//Local decleration
	int num;
	
	//Input
	printf("Enter any intiger\n");
	scanf("%d", &num);
	
	//Logic
	if (num < 0)
	{
		printf("%d\n", -num);
	}
	else
	{
		printf("%d\n", num);
	}
	return 0;
}