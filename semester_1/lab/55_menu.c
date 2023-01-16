/*
Dec 12, 2022
Author: Aakash Chauhan
Program:	Menu driven program
			1. check for odd even
			2. Check for perfectnumber
			3. Check for armstrong
			4. Calculate factorial
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void isEven(int);
void isPerfect(int);
void isArm(int);
int fact(int);

int main()
{
	int num, ch, x = 1;

	do
	{
		printf("\n\n******* MENU  *******\n\n");
		printf("1. Check for Odd Even\n");
		printf("2. Check for perfect number\n");
		printf("3. Check for Armstrong number\n");
		printf("4. Find Factorial of number\n");
		printf("5. Exit\n");
		scanf("%d", &ch);

		switch (ch)
		{
		case 1:
			printf("Enter The Value of n: ");
			scanf("%d", &num);
			isEven(num);
			break;
		case 2:
			printf("Enter The Value of n: ");
			scanf("%d", &num);
			isPerfect(num);
			break;
		case 3:
			printf("Enter The Value of n: ");
			scanf("%d", &num);
			isArm(num);
			break;
		case 4:
			printf("Enter The Value of n: ");
			scanf("%d", &num);
			printf("The value of factorial is %d\n", fact(num));
		case 5:
			exit;
		default:
			printf("INVALD\n");
		}

		printf("\n\nPress 0 to exit or 1 to continue ...\n");
		scanf("%d", &x);
	} while (ch != 5 && x);
	return 0;
}

void isEven(int num)
{
	if (num % 2 == 0)
		printf("Number is Even\n");
	else
		printf("Number is Odd\n");
}

void isPerfect(int num)
{
	int i, sum = 0;

	for (i = 1; i <= num / 2; i++)
	{
		if (num % i == 0)
			sum = sum + i;
	}

	if (num == sum)
		printf("This is Perfect Number\n");
	else
		printf("This is not Perfect Number\n");
}

void isArm(int num)
{
	int sum = 0, count = 0, temp;
	temp = num;
	while (num != 0)
	{
		count++;
		num = num / 10;
	}
	num = temp;
	while (num != 0)
	{
		sum = sum + pow(num % 10, count);
		num = num / 10;
	}
	if (temp == sum)
		printf("This is Armstrong Number\n");
	else
		printf("This is not Armstrong Number\n");
}

int fact(int num)
{
	if (num == 0 || num == 1)
		return 1;
	return (num * fact(num - 1));
}
