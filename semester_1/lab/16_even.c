/*
Nov 6, 2022
Author: Aakash Chauhan
Program: Check weather number is even or odd
*/

#include<stdio.h>
int main ()
{
	//Local decleration
	int num;
	
	//Input
	printf("Enter any number\n");
	scanf("%d", &num);
	
	//Logic
	(num%2 == 0) ? printf("Number is even\n") : printf("Number is odd\n");
    
	return 0;
}