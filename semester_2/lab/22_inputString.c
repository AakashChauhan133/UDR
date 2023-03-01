/*
	Author: Aakash Chauhan
	Date: February 27, 2023
	Program: Input sting using scanf("%s")
*/

#include <stdio.h>

int main()
{
	// Local decleration
	char str[100];
	
	// Input Section
	printf("Enter the string: ");
	scanf("%s",str);
	
	// Output Section
	printf("\nOUTPUT\n");
	puts(str);

	return 0;
}
