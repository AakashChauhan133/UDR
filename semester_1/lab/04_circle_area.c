/*
Nov 6, 2022
Author: Aakash Chauhan
Program: Area of circle
*/

#include <stdio.h>

int main()
{
    float radius, area;                             // local declaration

    printf("Enter radius of your circle\n");        // message to user
    scanf("%f", &radius);                           // taking input and addersing to variable

    // Logic
    area = 3.141592 * radius * radius;              // area of circle = pi square(r)

    // Output
    printf("\nArea of circle is %f\n", area);

    return 0;
}