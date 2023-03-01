/*
	Author: Aakash Chauhan
	Date: February 28, 2023
	Program: User defined code to reverse array
*/

#include <stdio.h>

void revstr(char []);

int main()
{
	// Local declerarion
	int len = 0, i, j;
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
	revstr(str);
	
	// Output
	i = 0;
	printf("\nOUTPUT\n");
	while (1)
	{
		printf("%c", str[i]);
		if (str[i] == '\0')
			break;
		i++;
	}
	printf("\n");
	
	return 0;
}


void revstr(char str[])
{
	int i, j ,len = 0;
	char temp;	
	for (len = 0; str[len] != '\0'; len++);
	i = 0;
	j = len - 1;
	while (i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++, j--;
	}
}
