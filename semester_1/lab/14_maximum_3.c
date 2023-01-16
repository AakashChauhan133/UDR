/*
Nov 6, 2022
Author: Aakash Chauhan
Program: Finding largest number out of three
*/

#include<stdio.h>
int main()
{
	//local decleration
	int n1, n2, n3;
	
	
	//Input
	printf("Enter first number: ");
	scanf("%d", &n1);
	
	printf("Enter second number: ");
	scanf("%d", &n2);
	
	printf("Enter third number: ");
	scanf("%d", &n3);
	
	//Logic1
	// (n1>n2) ? n2 = n1 : 0;
	// (n2>n3) ? n3 = n2 : 0;
	
	//Logic2 with Output
    ((n1 > n2) && (n1 > n3)) ? printf("%d is gretest", n1) : (n2 > n3) ? printf("%d is gretest", n2) : printf("%d is gretest", n3);
	
	return 0;
	
}