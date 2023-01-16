/*
Nov 6, 2022
Author: Aakash Chauhan
Program: Convert days into year month week days
*/

#include<stdio.h>

int main()
{
	//local declaration
	int days, d, w, m, y;
	
	//Input
	printf("Enter days: ");
	scanf("%d", &days);
	
	//Logic
	y = days/365;
	m = (days%365)/30;
	w = ((days%365)%30)/7;
	d = ((days%365)%30)%7;
	
	//Output
	printf("years: %d\nmonths: %d\nweeks: %d\ndays: %d\n", y, m, w, d);
	
	return 0;
}