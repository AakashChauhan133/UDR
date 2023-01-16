/*
Nov 7, 2022
Author: Aakash Chauhan
Program: Print even numbers till n using while loop
*/

#include<stdio.h>
int main ()
{
	// Local decleration
	int i = 2;
	
	// Loop
	while (i <= 50)
	{
		printf("%d\n", i);
		i = i + 2;
	}
	
	return 0;
}
