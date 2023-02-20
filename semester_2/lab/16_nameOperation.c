/*
	Author: Aakash Chauhan
	Date: February 20, 2023

	Program: Input your name as a char array and perform follwing
		-> count the number of vowels
		-> capitalize all letters
		-> print intials only
*/

#include <stdio.h>

int main()
{
	// Local decleration		
	int i, vowels = 0;
	char a[100];
	
	//Input	
	printf("Enter the letters\n");
	i = 0;
	while (1)
	{
		a[i] = getchar();
		if (a[i] == '\n')
			break;
		i++;
	}
		
	// Preview
	printf("\nPREVIEW\n");
	i = 0;
	while (1)
	{
		printf("%c", a[i]);
		if (a[i] == '\n')
			break;
		i++;
	}
	
	// Logic for vowels
	i = 0;
	while (1)
	{
		if (a[i] == 97 || a[i] == 65 || a[i] == 101 || a[i] == 69 || a[i] == 73 || a[i] == 105 || a[i] == 111 || a[i] == 79 || a[i] == 117 || a[i] == 85) 
			vowels++;
		if (a[i] == '\n')
			break;
		i++;
	}
	printf("\nNumber of vowels => %d\n", vowels);

	// Logic for capitalize full name
	i = 0;
	while (1)
	{
		if (a[i] > 96)
			a[i] -= 32;
		if (a[i] == '\n')
			break;
		i++;
	}
	printf("\nAFTER CAPITALISATION\n");
	i = 0;
	while (1)
	{
		printf("%c", a[i]);
		if (a[i] == '\n')
			break;
		i++;
	}
	
	// Logic to print initals
	printf("%c. ", a[0]);
	i = 1;
	while (1)
	{
		if (a[i] == 32)
			printf("%c. ", a[i + 1]);
		if (a[i] == '\n')
			break;
		i++;
	}
	printf("\n");
	return 0;
}
