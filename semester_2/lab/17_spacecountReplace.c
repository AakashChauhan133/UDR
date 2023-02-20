/*
	Author: Aakash Chauhan
	Date: February 20, 2023

	Program: Replace given all spaces in given char array with given special char
*/

#include <stdio.h>

int main()
{
	// Local decleration
	int i, space = 0;
	char a[100], specialchar;

	// Input
	printf("Enter the special character\n");
	specialchar = getchar();
	getchar(); // as we have to ignore one enter after special char so drop that char
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

	// Logic for counting space
	i = 0;
	while (1)
	{
		if (a[i] == 32)
			space++;
		if (a[i] == '\n')
			break;
		i++;
	}
	printf("Number of space => %d\n", space);
	// Logic for replacing space
	i = 0;
	while (1)
	{
		if (a[i] == 32)
			a[i] = specialchar;
		if (a[i] == '\n')
			break;
		i++;
	}
	// Output
	printf("\nOUTPUT\n");
	i = 0;
	while (1)
	{
		printf("%c", a[i]);
		if (a[i] == '\n')
			break;
		i++;
	}
	return 0;
}
