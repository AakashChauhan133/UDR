/*
Nov 6, 2022
Author: Aakash Chauhan
Program: Check Weather it is leap year 
*/

#include<stdio.h>
int main()
{
	int year;
	
	printf("Enter your year : ");
	scanf("%d", &year);
	
	//Logic 365.2425 days 27 seconds
	// if not use the critera of 400 then the year is longer 0.0078 days. 
	if (((year % 4 == 0) && (year%100 != 0)) || (year % 400 == 0)) {
		printf("This is leap year\n");
	}
	else {
		printf("This is not leap year\n");
	}
	return 0;
}