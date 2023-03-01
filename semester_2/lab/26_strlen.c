/*
	Author: Aakash Chauhan
	Date: February 28, 2023
	Program: Calculate length of string
*/

#include <stdio.h>
int main()
{
	// Local declerarion
	int len = 0, i;
	char str[100];
	
	// Input Section
	printf("Enter the string: ");
	i = 0;
	while (1)
	{
		scanf("%c", &str[i]);
		if (str[i] == '\n')
			break;
		i++;
	}
	str[i] = '\0';
	
	// Logic
	for (len = 0; str[len] != '\0'; len++);
	
	// Output Section
	printf("\nLength of string => %d\n", len);
	
	return 0;
}
