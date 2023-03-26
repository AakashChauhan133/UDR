/*
 *	Author: Aakash Chauhan
 *	Date: March 20, 2023
 *	Program: Find the length of string using pointers
 */

#include <stdio.h>

int main()
{
	char s[100];
	char *p, *q;
	int length;
	printf("Enter the string\n");
	gets(s);

	p = q = s;

	// Logic
	while (*q != 0)
	{
		printf("%c\n", *(q));
		q = (q + 1);
	}

	length = q - p;

	// Output
	printf("Length of string is %d\n", length);

	return 0;
}