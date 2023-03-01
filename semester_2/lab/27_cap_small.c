/*
	Author: Aakash Chauhan
	Date: February 28, 2023
	Program: User defined code to change given two string cap to small and small to cap
*/

#include <stdio.h>

void Capitalize(char []);
void UnCapitalize(char []);
int main()
{
	// Local declerarion
	int i;
	char strLow[100], strHigh[100];
	
	// Input Section
	printf("Enter the string in lower case : ");
	i = 0;
	while (1)
	{
		scanf("%c", &strLow[i]);
		if (strLow[i] == '\n')
			break;
		i++;
	}
	strLow[i] = '\0';	
	printf("Enter the string in upper case : ");
	i = 0;
	while (1)
	{
		scanf("%c", &strHigh[i]);
		if (strHigh[i] == '\n')
			break;
		i++;
	}
	strHigh[i] = '\0';
	
	// Calling function
	Capitalize(strLow);
	UnCapitalize(strHigh);
	
	// Output
	i = 0;
	printf("\nOUTPUT 1\n");
	while (1)
	{
		printf("%c", strLow[i]);
		if (strLow[i] == '\0')
			break;
		i++;
	}
	printf("\nOUTPUT 2\n");
	i = 0;
	while (1)
	{
		printf("%c", strHigh[i]);
		if (strHigh[i] == '\0')
			break;
		i++;
	}
	printf("\n");
	return 0;
}

void Capitalize(char str[])
{
	for (int i = 0; str[i] != '\0'; i++)
		str[i] = (str[i] >= 97 && str[i] <= 122) ? str[i] - 32 : str[i];
}
void UnCapitalize(char str[])
{
	for (int i = 0; str[i] != '\0'; i++)
		str[i] = (str[i] >= 65 && str[i] <= 90) ? str[i] + 32 : str[i];

}
