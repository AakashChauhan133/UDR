/*
Nov 15, 2022
Author: Aakash Chauhan
Program: Check Weather number is plandrome or not
*/

#include<stdio.h>
void main()
{
	int num, back, temp;
	back = 0;
	
	printf("Enter number : ");
	scanf("%d", &num);
	temp = num;
	// Logic
	while (num != 0)
	{
		back = (back * 10) + (num % 10);
		num = num / 10;
	}
	
	// Output
	if (temp == back)
		printf("\n\nThis is a Plandrome number\n\n");
	else
		printf("\n\nThis is not a plandrome number\n\n");
}
