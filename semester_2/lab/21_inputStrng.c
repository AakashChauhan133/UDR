/*
	Author: Aakash Chauhan
	Date: February 27, 2023
	Program: Input sting using scanf("%c")
*/

#include <stdio.h>

int main()
{
	// Local decleration
	int i;
	char str[100];
	
	// Input Section
	printf("Enter the string: ");
	i = 0;
	while(1)
	{
		// scanf("%c", &str[i]);
		str[i] = getchar();
		if (str[i] == '\n')
			break;
		i++;
	}
	str[i] = '\0';

	// Output Section
	printf("\nOUTPUT\n");
	for (i = 0; str[i] != '\0'; i++)
		printf("%c", str[i]);
	printf("\n");
	
	return 0;
}
