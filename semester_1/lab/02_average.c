/*
Nov 6, 2022
Author: Aakash Chauhan
Program: Average of 5 marks
*/

#include<stdio.h>
int main()
{
    int m1, m2, m3, m4, m5, average;

    m1 = 10;
    m2 = 20;
    m3 = 23;
    m4 = 54;
    m5 = 53;

    // Logic
    average = (m1 + m2 + m3 + m4 + m5)/5;

    printf("Average marks = %d", average);

    return 0;
}