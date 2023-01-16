/*
Nov 6, 2022
Author: Aakash Chauhan
Program: Calculating simple interest 
*/

#include <stdio.h>

int main()
{
    // local declaration
    float principle, rate, simple_int, time;
    time = 2;

    printf("Enter principle and rate\n"); // sending message to user

    printf("Principle :");
    scanf("%f",&principle);     // taking principle value from user and addresing to variable
    
    printf("Rate :");
    scanf("%f", &rate);         // taking rate from user and addresing to variable

    // calculation
    simple_int = (principle * rate * time) / 100;

    // output to user
    printf("\nData Entered is \nprinciple: %f \nrate: %f \ntime: %f (default) \nOUTPUT\nSimple interest : %f \n", principle, rate, time, simple_int);
    return 0;
}