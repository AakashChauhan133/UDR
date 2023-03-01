/*
	Author: Aakash Chauhan
	Date: February 28, 2023
	Program: Using string library
*/

#include <stdio.h>
#include <string.h>

int main()
{
	// Local decleration
	int len;
	char str1[20], str2[20], str3[20];
	
	// Input Section
	printf("Enter the string\n");
	fgets(str1, 7, stdin);
	getchar();
	fgets(str2, 7, stdin);

	/**********  Functions and Output ***********/ 
	printf("Preview\n");
	puts(str1);
	puts(str2);
	
	// length
	len = strlen(str1);
	printf("strlen(str1) => %d\n", len);
	
	// Concatinate
	printf("Strcat()\n");
	strcat(str1, str2);
	puts(str1);
	
	// Copy
	printf("strcpy()\n");
	strcpy(str3, str2);
	puts(str3);
	
	return 0;
}
	
	
