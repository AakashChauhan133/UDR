/*
	Author: Aakash Chauhan
	Date: February 27, 2023
	Program: Input number of lines of paragraph and input it then print
*/

#include <stdio.h>

int main()
{
	// Local decleration
	int i, j;
	char para[100][100];
	
	// Input
	printf("Enter the number of lines: ");
	scanf("%d", &j);
	
	for (int x = 0; x <= j ; x++)
	{
			i = 0;
			while (1)
			{
				para[x][i] = getchar();
				if (para[x][i] == '\n')
					break;
				i++;
			}
	}
	for (int x = 0; x <= j ; x++)
	{
			i = 0;
			while (1)
			{
				printf("%c", para[x][i]);
				if (para[x][i] == '\n')
				{
					break;
				}
				i++;
			}
	}
	return 0;
}
