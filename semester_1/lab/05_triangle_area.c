/*
Nov 6, 2022
Author: Aakash Chauhan
Program: Area of Triangle 
*/

#include <stdio.h>

int main()
{
    float height, base, area;                                  // local declaration

    printf("Enter height and base of your triangle\n"); // message to user
    scanf("%f%f", &height, &base);                               // taking input from user and addressing to variable

    // Logic
    area = 0.5 * height * base;                                        // aera = (1/2) height * base

    // Output to user
    printf("Area of your triangle is %f\n", area);
    return 0;
}