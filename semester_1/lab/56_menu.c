/*
Dec 12, 2022
Author: Aakash Chauhan
Program:	Menu driven program
			1. Print Fibonacii Series
			2. Sum of 1 + 2^2 + 3^3 + ...
			3. Print sum of Digit of numbers
			4. Print diamond pattern of given number of rows
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void fibo(int num);
void Sum(int);
void SumD(int);
void Diamond(int);

int main()
{
	int num, ch, x = 1;
	
	do
	{
		printf("\n\n******* MENU  *******\n\n");
		printf("1. Print Fibonacii Series\n");
		printf("2. Sum of 1 + 2^2 + 3^3 + ...\n");
		printf("3. Print sum of Digit of numbers\n");
		printf("4. Print Diamonds\n");
		printf("5. Exit\n");
		scanf("%d", &ch);

		switch (ch)
		{
		case 1:
			printf("Enter The Value of n: ");
			scanf("%d", &num);
			fibo(num);
			break;
		case 2:
			printf("Enter The Value of n: ");
			scanf("%d", &num);
			Sum(num);
			break;
		case 3:
			printf("Enter The Number: ");
			scanf("%d", &num);
			SumD(num);
			break;
		case 4:
			printf("Enter The Number Of Rows: ");
			scanf("%d", &num);
			Diamond(num / 2);
			break;
		case 5:
			exit;
		default:
			printf("INVALD\n");
		}
		num = 0;
		printf("\n\nPress 0 to exit or 1 to continue ...\n");
		scanf("%d", &x);
	} while (ch != 5 && x);
	return 0;
}

void fibo(int num)
{
	int sum = 0,
		t1 = 0,
		t2 = 1;

	printf("0\n");
	for (int i = 0; i <= num - 2; i++)
	{
		sum = t1 + t2;
		printf("%d\n", t2);
		t1 = t2;
		t2 = sum;
	}
}

void Sum(int num)
{
	int s = 0, i;
	for (i = 1; i <= num; i++)
		s = s + pow(i, i);
	printf("Sum = %d\n", s);
}

void SumD(int num)
{
	int s = 0, temp;
	while (num != 0)
	{
		s = s + (num % 10);
		num = num / 10;
	}
	printf("Sum of digitd = %d", s);
}

void Diamond(int num)
{
	num += 1;
	int i, j, s, x;
	x = num - 1;
	for (i = 1; i <= num; i++)
	{
		for (j = 0; j < (num - i); j++)
			printf(" ");
		for (s = 1; s <= (2 * i - 1); s++)
			printf("*");
		printf("\n");
	}
	for (i = 2; i <= num; i++)
	{
		for (s = 1; s <= (i - 1); s++)
			printf(" ");
		for (j = 1; j <= (num - i + x); j++)
			printf("*");
		printf("\n");
		x--;
	}
}
