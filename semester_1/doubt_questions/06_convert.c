/*
    Author: Aakash Chauhan
    Date: January 10, 2023
    decimal To binary conversion and vice vera
*/

#include <stdio.h>
#include <math.h>

void BinToDec(int);
void DecToBin(int);
int main()
{
    // Local declearation
    int bin_, dec;
    // Input Section
    printf("Enter the Decimal value: ");
    scanf("%d", &dec);
    
    printf("Enter the binary value: ");
    scanf("%d", &bin_);

    // Function calling
    printf("\nDecimal to binary is : ");
    DecToBin(dec);
    printf("\nBinary to decimal is : ");
    BinToDec(bin_);

    return 0;
}
void DecToBin(int dec)
{
    int i = 0, a[20] = {0};
    while (dec != 0)
    {
        a[i++] = dec % 2;
        dec /= 2;
    }

    for (i; i >= 0; i--)
        printf("%d ", a[i]);
}
void BinToDec(int bin_)
{
    int num = 0, i = 0;
    while (bin_ != 0)
    {
        num += (bin_ % 2) * pow(2, i++);
        bin_ /= 10;
    }
    printf("%d", num);

}