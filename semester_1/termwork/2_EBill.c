/*
    Name: Aakash
    University Roll No: 2021931
    Section: M

    Problem statement:
    Write a C program to input electricity unit and calculate total electricity bill according to the given condition.
    For first 50 units Rs 0.50 per unit
    For next 100 units Rs 0.75 per unit
    For next 100 units Rs 1.20 per unit
    For unit above 250 Rs 1.50 per unit
    An additional surcharge of 20% of bill is added.
*/
#include <stdio.h>

int main()
{
    // Local decleration
    float units, bill, surcharge;

    // Input
    printf("********** INPUT **********\n");
    printf("Units: ");
    scanf("%f", &units);

    if (units <= 50)
    {
        bill = units * 0.50;
    }
    else if (units <= 150)
    {
        bill = (50 * 0.50) + ((units - 50) * 0.75);
    }
    else if (units <= 250)
    {
        bill = (50 * 0.50) + (100 * 0.75) + ((units - 150) * 1.20);
    }
    else
    {
        bill = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((units - 250) * 1.50);
    }

    // 20% surcharge addition to bill
    surcharge = 0.20 * bill;
    bill = bill + surcharge;

    // Output
    printf("********** OUTPUT **********\n");
    printf("Electricity bill = Rs %f\n\n", bill);
    return 0;
}