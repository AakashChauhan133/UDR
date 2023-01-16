/*
Nov 6, 2022
Author: Aakash Chauhan
Program: Is alphabet or number or special char also print ASCII value
*/

#include<stdio.h>

int main ()
{
	char a;
	
	printf("Enter your alphabet : ");
	scanf("%c", &a);
	
	if (a >= 65 && a <= 90){
		printf("this is upper case\n");
	}
	else if	(a >= 97 && a <= 122){
		printf("this is lower case\n");
	}
	else if	(a >= 48 && a <= 57){
		printf("this is number\n");
	}
	else {
		printf("This is special character\n");
	}
	
	printf("The ASCAII value is %d\n\n", a);
	return 0;
}