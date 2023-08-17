/*
Nov 6, 2022
Author: Aakash Chauhan
Program: Area of rect and circle
*/

#include <stdio.h>

int main()
{
    float len, br, a_r, peri, radius, a_c, circ; // local declaration

    printf("Enter length and breadth of your rectangle\n");
    scanf("%f%f", &len, &br);
    printf("Enter radius of your circle\n");
    scanf("%f", &radius);

    // Logic for rectangle
    a_r = len * br;         // aera = length * breadth
    peri = 2.0 * (len + br); // perimiter = 2(length * breadth)

    // Logic for circle
    a_c = 3.1459 * radius * radius;
    circ = 3.1459 * radius *2;

    // Output to user
    printf("Area of your rectangle is %f\nPerimerter of your rectangle is %f\n", a_r, peri);
    printf("\nArea of your circle is %f\nPerimerter of your circle is %f\n", a_c, circ);

    return 0;
}