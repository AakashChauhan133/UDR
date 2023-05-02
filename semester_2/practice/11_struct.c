/*
 *  Author: Aakash Chauhan
 *  Date: May 2, 2023
 *  Implimentaion of structure and file handling
 */
#include <stdio.h>

struct Book
{
    int price;
    char name[100];
};

int main()
{
    struct Book B;
    printf("Enter the price of book: ");
    scanf("%d", &B.price);
    getchar();
    gets(B.name);
    
    // File handling
    FILE *fp;
    fp = fopen("./11 struct file.txt", "w"); // Yes, Space also works here
    fputc(B.price + 48, fp); // fputc (single char, file pointer)
    for (int i = 0; B.name[i] != 0; i++)
        fputc(B.name[i], fp);
    fclose(fp);

    return 0;
}