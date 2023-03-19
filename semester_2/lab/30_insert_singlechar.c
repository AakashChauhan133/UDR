/*
	Author: Aakash Chauhan
	Date: March 13, 2023
	Program: insert a single charater at given position p
*/

#include <stdio.h>

int main()
{
	// Local decleration
	int i, p;
	char s[100], ch;

	// Input Section
	printf("Enter the string : ");
	i = 0;
	while (1)
	{
		scanf("%c", &s[i]);
		if (s[i] == '\n')
			break;
		i++;
	}
	s[i] = '\0';

	printf("Eneter the charater to insert: ");
	scanf("%c", &ch);
	printf("Enter the position: ");
	scanf("%d", &p);

	// Logic
	for (int j = i; j >= 0; j--)
	{
		s[j + 1] = s[j];
		if (j == p - 1)
		{
			s[j] = ch;
			break;
		}
	}

	// Output
	printf("\nOUTPUT\n");
	for (i = 0; s[i] != '\0'; i++)
		printf("%c", s[i]);
	printf("\n");

	return 0;
}
