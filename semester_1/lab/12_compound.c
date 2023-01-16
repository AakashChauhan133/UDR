/*
Nov 6, 2022
Author: Aakash Chauhan
Program: To Calculate compund intrest
*/

#include<stdio.h>
#include<math.h>

int main()
{
	//local declaration
	float p, r, n, t, ci;
	
	
	//input 
	printf("Enter Priciple: ");
	scanf("%f", &p);
	
	printf("Enter rate: ");
	scanf("%f", &r);
	
	printf("Enter time in years: ");
	scanf("%f", &t);
	
	printf("Enter number of installment per year: ");
	scanf("%f", &n);
	
	//Logic
	ci = (p*pow((1+(r/n)),(n*t)))-p;
	
	//output
	printf("The compound intrest is %f\n", ci);
	
	return 0;
}