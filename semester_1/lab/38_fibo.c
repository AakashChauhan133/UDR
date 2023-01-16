/*
Nov 15, 2022
Author: Aakash Chauhan
Program: Print fibonacci series
*/


#include<stdio.h>

void main()
{
	int num,
		sum = 0,
		t1 = 0,
		t2 = 1;
	
	printf("Enter number");
	scanf("%d", &num);
	
	printf("0\n");
	for (int i = 0; i <= num - 2; i++)
	{
		sum = t1 + t2;
		printf("%d\n", t2); 
		t1 = t2;
		t2 = sum;
		
	}
	
}
