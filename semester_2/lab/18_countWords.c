/*
	Author: Aakash Chauhan
	Date: February 21, 2023

	Program: Count the number of words
*/

#include <stdio.h>
int main()
{
	// Local decleration		
	int i, words;
	char a[100];
	
	//Input	
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

	// Logic
	i = 0;
	words = (a[0] == ' ') ? 0 : 1;	// If there is word in begining start with 1 otherwise 0
	while (1)
	{
		if (a[i] == ' ' && a[i + 1] != ' ' && a[i + 1] != '\n')
			words++;
		if (a[i] == '\n')
			break;
		i++;
	}
	printf("\nTotal numbers of words is %d\n", words);

	return 0;
}
