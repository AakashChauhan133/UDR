/*
Nov 29, 2022
Author: Aakash Chauhan
Program: Print given pattern
A
B C
D E F
G H I J
K L M N O
*/

#include<stdio.h>

int main()
{
	int num;
	char A = 65;
	printf("Enter the value of n: ");
	scanf("%d", &num);
	
	for (int i = 1; i <= num; i++)
	{
		for(int j = 1; j <= i; j++)
			printf("%c ", A++);
		printf("\n");
	}
}
