/*
	Author: Aakash Chauhan
	Date: March 14, 2023
	Program: Delete a character from substring
*/

#include <stdio.h>

int main()
{
	// Local decleration
	int i, j;
	char s[1000], ch;

	// Input Section
	printf("Enter the string: ");
	i = 0;
	while (1)
	{
		scanf("%c", &s[i]);
		if (s[i] == '\n')
			break;
		i++;
	}
	s[i] = '\0';

	printf("Enter the charater to delete: ");
	scanf("%c", &ch);

	// Logic
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ch)
		{
			for (j = i; s[j] != '\0'; j++)
				s[j] = s[j + 1];
			i--;
		}
	}

	// Output
	printf("\nOUTPUT\n");
	for (i = 0; s[i] != '\0'; i++)
		printf("%c", s[i]);
	printf("\n");

	return 0;
}
