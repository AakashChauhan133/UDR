/*
	Author: Aakash Chauhan
	Date: February 27, 2023
	Program: Input sting using gets()
*/

#include <stdio.h>

int main()
{
	// Local decleration
	char str[100];

	// Input Section
	printf("Enter the string: ");
	gets(str);

	// Output Section
	printf("\nOUTPUT\n");
	puts(str);

	return 0;
}
