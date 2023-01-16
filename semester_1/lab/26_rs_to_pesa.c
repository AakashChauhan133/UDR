/*
Nov 6, 2022
Author: Aakash Chauhan
Program: Code to convert ruppee to pesa
*/


#include <stdio.h>

int main()
{
    // local declaration
    float ruppe, pesa;

    // Taking input from user
    printf("Enter amount in ruppes\n");
    scanf("%f", &ruppe);                        // taking input from user and addressing to variable

    // logic
    pesa = ruppe * 100;                         // Rs12 = 12*100 = 1200

    //Output
    printf("\nRs %f in pesa is %f\n", ruppe, pesa);

    return 0;
}