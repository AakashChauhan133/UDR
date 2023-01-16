/*
Nov 6, 2022
Author: Aakash Chauhan
Program: Calculate roots of quadratic equations 
*/

#include<stdio.h>
#include<math.h>
int main()
{
	//local declartaion of variables
	float a, b, c, root1, root2, d2;
	
	//Input
	printf("\nEnter value  of a\n");
	scanf("%f", &a);

	printf("\nEnter value  of b\n");
	scanf("%f", &b);
	
	printf("\nEnter value  of c\n");
	scanf("%f", &c);
	
	//Logic
	d2 = (b*b)-4*a*c;
	root1 = ((-1*b)+(sqrt(d2)))/(2*a);
	root2 = ((-1*b)-(sqrt(d2)))/(2*a);
	
	//Output 
	printf("the roots of your equatin are\nx1: %f\nx2: %f\n", root1, root2);
	
	return 0;
}