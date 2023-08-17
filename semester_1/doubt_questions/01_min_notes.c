/*
	Author: Aakash Chauhan
	Date: 22 October, 2022
	Minimum notes or coins required for any amount
*/


// #include<stdio.h>
// int main()
// {
//     int amount;
//     int n500, n200, n100, n50, n20, n10, n5, n2, n1;

//     //Input
//     printf("Enter the amount : ");
//     scanf("%d", &amount);

//     // Logic
//     n500 = amount/500; amount = amount % 500;
//     n200 = amount/200; amount = amount % 200;
//     n100 = amount/100; amount = amount % 100;
//     n50 = amount/50; amount = amount % 50;
//     n20 = amount/20; amount = amount % 20;
//     n10 = amount/10; amount = amount % 10;
//     n5 = amount/5; amount = amount % 5;
//     n2 = amount/2; amount = amount % 2;
//     n1 = amount/1; amount = amount % 1;

//     printf("Notes of 500 : %d\n", n500);
//     printf("Notes of 200 : %d\n", n200);
//     printf("Notes of 100 : %d\n", n100);
//     printf("Notes of 50 : %d\n", n50);
//     printf("Notes of 20 : %d\n", n20);
//     printf("Notes of 10 : %d\n", n10);
//     printf("Notes of 5 : %d\n", n5);
//     printf("Notes of 2 : %d\n", n2);
//     printf("Notes of 1 : %d\n", n1);

//     return 0;
// }

/**************** Hybrid Way *******************/
#include <stdio.h>
int main()
{
    int amount, notes[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    
    //Input
    printf("Enter the amount : ");
    scanf("%d", &amount);

    for (int i = 0; i < (sizeof(notes) / sizeof(notes[0])); i++)
    {
        int currunt = amount / notes[i];
        amount = amount % notes[i];

        printf("Notes of %d :%d\n", notes[i], currunt);
    }
    return 0;
}