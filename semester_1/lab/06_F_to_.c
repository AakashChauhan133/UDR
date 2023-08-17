/*
Nov 6, 2022
Author: Aakash Chauhan
Program: Degree Feranite to Celcius
*/

#include <stdio.h>

int main()
{
    float degree, ferhanite;                            // local declaration of variabels

    printf("Enter temperature in Feranite\n");          // sending message to user
    scanf("%f", &ferhanite);                            // taking input addressing to variable

    // Logic
    degree = (5. / 9.) * (ferhanite - 32);

    // Output to user
    printf("%f Feranite celcius in Celcius is %f\n", ferhanite, degree);

    return 0;
}