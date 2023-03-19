/*
	Author: Aakash Chauhan
	Date: March 13, 2023
	Program: insert a substring at given position p
*/

#include <stdio.h>

int main()
{
	// Local decleration
	int i, p, j;
	char s[100], sub[100], ch;
	
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
	
	printf("Enter the substring: ");
	j = 0;
	while (1)
	{
		scanf("%c", &sub[j]);
		if (sub[j] == '\n')
			break;
		j++;
	}
	sub[j] = '\0';
	
	printf("Enter the position: ");
	scanf("%d", &p);
	
	// Logic
	for (int k = i; k >= 0; k--)
	{	
		s[k + j] = s[k];
		if (k == p - 1)
		{
			for (int x = 0; sub[x] != '\0'; x++)
			{
				s[k++] = sub[x];
			}
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
