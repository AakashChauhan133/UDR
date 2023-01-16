/*
Nov 7, 2022
Author: Aakash Chauhan
Program: Print even numbers till n using for loop
*/

#include<stdio.h>
int main()
{
	// Local decleration
	int i = 2;
	
	// Loop
	for (i; i <= 50; i = i + 2)
	{
		printf("%d\n", i);
	}
	
	return 0;
}
