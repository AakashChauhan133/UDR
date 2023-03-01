/*
	Author: Aakash Chauhan
	Date: February 28, 2023
	Program: User concatinate two string using two functions
*/

#include <stdio.h>

void Method1();
void Method2();

int main()
{	
	Method1();
	Method2();
	return 0;
}


void Method1()
{
	printf("METHOD 1\n");
	// Local declerarion
	int i, strlen1 = 0;
	char str1[100], str2[100];
	
	// Input Section
	printf("Enter the First string : ");
	i = 0;
	while (1)
	{
		scanf("%c", &str1[i]);
		if (str1[i] == '\n')
			break;
		i++;
	}
	str1[i] = '\0';	
	printf("Enter the Second string : ");
	i = 0;
	while (1)
	{
		scanf("%c", &str2[i]);
		if (str2[i] == '\n')
			break;
		i++;
	}
	str2[i] = '\0';
	
	// Logic
	for (strlen1 = 0; str2[strlen1] != '\0'; strlen1++);
	strlen1 = strlen1 - 1;
	for (i = 0; str2[i] != '\0'; i++)
		str1[strlen1++] = str2[i];
	str1[strlen1] = '\0';
	
	
	// Output
	printf("\nOUTPUT\n");
	i = 0;
	while (1)
	{
		printf("%c", str1[i]);
		if (str1[i] == '\0')
			break;
		i++;
	}	
		printf("\n");
}

void Method2()
{
	printf("METHOD 2\n");
	// Local declerarion
	int i, strlen1 = 0;
	char str1[100], str2[100];
	
	// Input Section
	printf("Enter the First string : ");
	fgets(str1, 20, stdin);
	printf("Enter the Second string : ");
	fgets(str2, 20, stdin);
	
	// Logic
	for (strlen1 = 0; str2[strlen1] != '\0'; strlen1++);
	strlen1 = strlen1 - 1;
	for (i = 0; str2[i] != '\0'; i++)
		str1[strlen1++] = str2[i];
	str1[strlen1] = '\0';
	
	
	// Output
	printf("\nOUTPUT\n");
	i = 0;
	while (1)
	{
		printf("%c", str1[i]);
		if (str1[i] == '\0')
			break;
		i++;
	}	
		printf("\n");
}

