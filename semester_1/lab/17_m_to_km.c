/*
Nov 6, 2022
Author: Aakash Chauhan
Program: Convert centimeter into meter and kilomenter 
*/

#include <stdio.h>
int main()
{
    float cm, m, km;

    // Input
    printf("Enter length in centimeter : ");
    scanf("%f", &cm);

    // Logic
    m = cm / 100;
    km = m / 1000;
    printf("%f cm is %f in m and %f in km\n", cm, m, km);

    return 0;
}