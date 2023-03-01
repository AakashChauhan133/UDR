/*
	Author: Aakash Chauhan
	Date: February 27, 2023
	Program: Input sting using fgets()
*/


#include <stdio.h>

int main()
{
	// Local decleration
	char str[100];

	// Input Secion
	printf("Enter the string: ");
	fgets(str, 7, stdin);
	
	// Output Section
	printf("\nOUTPUT\n");
	puts(str);
	return 0;
}
