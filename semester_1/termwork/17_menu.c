/*
    Name: Aakash
    University Roll No: 2021931
    Section: M

    Problem statement: Write a menu driven program using functions that can perform the following tasks on pressing given keys:
                        1. Check a number is odd or even.
                        3. Print reverse of a number.
                        4. Print sum of series 1+3+5+7+9……upto n
                        5. Exit
*/

#include <stdio.h>
#include <stdlib.h>

// Function Initialisation
void isOdd(int);
int Reverse(int);
int sum(int);

int main()
{
    int num, ch, x = 1, res;
    do
    {
        printf("\n\n*******  MENU  *******\n\n");
        printf("1. Check the number is odd or even\n");
        printf("2. Print reverse of a number\n");
        printf("3. Print sum of series 1+3+5+7+9+ ... upto n\n");
        printf("4. Exit\n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter the number: ");
            scanf("%d", &num);
            isOdd(num);
            break;
        case 2:
            printf("Enter the number: ");
            scanf("%d", &num);
            res = Reverse(num);
            printf("The reversed number is %d\n", res);
            break;
        case 3:
            printf("Enter the value of n: ");
            scanf("%d", &num);
            res = sum(num);
            printf("The sum of series is %d\n", res);
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("INVALID CHOICE\n");
        }
        printf("\nPress 0 to exit and 1 to continue ...\n");
        scanf("%d", &x);
    } while (ch != 4 && x);

    return 0;
}
// Defition of functions
void isOdd(int num)
{
    if (num % 2 == 0)
        printf("This is even number\n");
    else
        printf("This is odd number\n");
}
int Reverse(int num)
{
    int rev;
    rev = 0;

    while (num != 0)
    {
        rev = (rev * 10) + (num % 10);
        num = num / 10;
    }
    return rev;
}
int sum(int num)
{
    int i, s;
    s = 0;
    for (i = 1; i <= num; i = i + 2)
    {
        s = s + i;
    }
    return s;
}
