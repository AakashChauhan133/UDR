/*
	Author: Aakash Chauhan
	Date: March 13, 2023
	Program: Replace every charter with its next vowel
*/

#include <stdio.h>

int main()
{
	// Local decleration
	int i;
	char s[100];
	
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

	// Logic
	for (int j = 0; s[j] != '\0'; j++)
	{
		if (s[j] < 65 || (s[j] > 122) || (s[j] > 90 && s[j] < 97))
			continue;
		else if (s[j] < 69)
			s[j] = 69;
		else if (s[j] < 73)
			s[j] = 73;
		else if (s[j] < 79)
			s[j] = 79;
		else if (s[j] < 86)
			s[j] = 86;
		else if (s[j] < 91)
			s[j] = 65;
		else if (s[j] < 101)
			s[j] = 101;
		else if (s[j] < 105)
			s[j] = 105;
		else if (s[j] < 111)
			s[j] = 111;
		else if (s[j] < 117)
			s[j] = 117;
		else if (s[j] < 123)
			s[j] = 97;
	}
	printf("\nOUTPUT\n");
	puts(s);
			
	return 0;
}
	
