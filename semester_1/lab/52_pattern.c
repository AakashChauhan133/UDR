/*
Dec 05, 2022
Author: Aakash Chauhan
Program: Print given pattern (inverted pyramid)

*************
 ***********
  *********
   *******
	*****
	 ***
	  *

*/

#include <stdio.h>

void method1(int);
void method2(int);

int main()
{
	int row;
	printf("Enter the number of rows : ");
	scanf("%d", &row);

	method1(row);
	method2(row);

}

void method1(int num)
{
	int i, j, s, x;
	x = num;
	for (i = 1; i <= num; i++)
	{
		for (s = 1; s <= (i - 1); s++)
			printf(" ");
		for (j = 1; j <= (num - i + x); j++)
			printf("*");
		printf("\n");
		x--;
	}
}

void method2(int num)
{
	int i, j, s;

	for (i = num; i >= 1; i--)
	{
		for (s = 1; s <= (num - i); s++)
			printf(" ");
		for (j = 1; j <= (2*i - 1); j++)
			printf("*");
		printf("\n");
	}

}