/*
Nov 6, 2022
Author: Aakash Chauhan
Program:	bill is high		if > 1500
			bill is Medium		if 800 < bill <= 1500
			bill is Low			if < 800
*/

#include<stdio.h>

int main()
{
	float perunit, n, bill;
	
	printf("Enter the cost of one unit :");
	scanf("%f", &perunit);
	
	printf("Enter the number of unit :");
	scanf("%f", &n);
	
	//Calculaion of bill
	bill = n * perunit;
	
	//conditions
	if (bill > 1500){
		printf("The bill is high and bill is %f\n", bill);
	}
	else if (bill <= 1500 && bill > 800){
		printf("The bill is normal and bill is %f\n", bill);
	}
	else {
		printf("The bill is low and bill is %f\n", bill);
	}
    return 0;
}