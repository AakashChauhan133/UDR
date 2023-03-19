/*
	Author: Aakash Chauhan
	Date: March 14, 2023
	Program: Delete a substring from substring
*/

#include <stdio.h>

int main()
{
	// Local decleration
	int i, j, point, flag;
	char s[1000], sub[1000];
	
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
	
	printf("Enter the substring: ");
	i = 0;
	while (1)
	{
		scanf("%c", &sub[i]);
		if (sub[i] == '\n')
			break;
		i++;
	}
	sub[i] = '\0';
	
	// Logic
	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 1;
		if (s[i] == sub[0])
		{
			point = i + 1;
			for (j = 1;sub[j] != '\0'; j++, point++)
			{
				if (sub[j] != s[point])
				{
					flag = 0;
					break;
				}
			}
			if (flag)
			{
				for (j = i; s[j] != '\0'; j++, point++)
				{
					s[j] = s[point];
				}
				i--;
			}
		}
	}
	
	// Output
	printf("\nOUTPUT\n");
	for (i = 0; s[i] != '\0'; i++)
		printf("%c", s[i]);
	printf("\n");
	
	return 0;
}
