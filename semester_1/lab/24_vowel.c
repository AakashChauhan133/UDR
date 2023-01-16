/*
Nov 6, 2022
Author: Aakash Chauhan
Program: Check weather char is vowel or consonent
*/

#include<stdio.h>
int main()
{
	char a;
	
	printf("Enter your character : ");
	scanf("%c", &a);
	
	//vowel a, e, i, o, u
	if ((a == 65)||(a == 69)||(a == 73)||(a == 79)||(a == 85)||(a == 97)||(a == 101)||(a == 105)||(a == 111)||(a == 117)){
		printf("Vowel\n");
	}
	else {
		printf("Consonent\n");
	}
	printf("ASCII : %d\n", a);
	return 0;
}