/*
Dec 05, 2022
Author: Aakash Chauhan
Program: Find sum of two digits using all 4 types of functions
*/

#include <stdio.h>

// With argument and with return type
int sum1(int, int);

// Without argument and without return type
void sum2();

// With argument and without return type
int sum3();

// Without argument and with return type
void sum4(int, int);

int main()
{
	int a, b;
	// Input for main a and b
	printf("Enter two numbers");
	scanf("%d%d", &a, &b);

	// Calling sum1()
	printf("sum1 = %d\n", sum1(a, b));

	// Calling sum2()
	sum2();

	// Calling sum3()
	printf("sum3 = %d\n", sum3());

	// Calling sum4()
	sum4(a, b);

	return 0;
}

int sum1(int a, int b)
{
	return (a + b);
}

void sum2()
{
	int a, b;
	printf("Enter two numbers \n");
	scanf("%d%d", &a, &b);
	printf("sum2 = %d\n", a + b);
}
int sum3()
{
	int a, b;
	printf("Enter two numbers \n");
	scanf("%d%d", &a, &b);
	return (a + b);
}
void sum4(int a, int b)
{
	printf("sum4 = %d\n", a + b);
}
