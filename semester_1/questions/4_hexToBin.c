/*
    Author: Aakash Chauhan
    Date: January 09, 2023
    Hexadecimal To binary conversion
*/

/*
    Note:
    This is algorithm is on the go it could be better 
    because it convert hex to dec then dec to bin
*/
#include <stdio.h>
#include <math.h>



int hex(char);

int main()
{
    int num = 0, i, j;
    char a[20];
    int b[20] = {0};
    // Input Section
    printf("Enter the hex digit: ");
    scanf("%s", a);

    // Logic
    for (j = 0; a[j] != '\0'; j++)
    {
        // this loop is find the length of the string enterd by the user
    }
    j--;
    // Loop to convert the hex to decimal
    for (i = 0; a[i] != '\0'; i++)
        num = num + (hex(a[i]) * pow(16, j--));

    // Output in decimal
    printf("num = %d\n", num);

    // loop to convert decimal to binary
    i = 0;
    while (num != 0)
    {
        b[i++] =(num % 2);
        num = num / 2;
    }

    // Output Loop
    // change the value of i in the loop to change to numbers of bits = i + 1
    for (i = 15; i >= 0; i--)
        printf("%d ", b[i]);
    return 0;
}

int hex(char a)
{
    // This function return the unit of hex to decimal
    if ('A' <= a  && a <= 'F')
        return ((int)a - 55);

    else if ('0' <= a <= 9)
        return (int)a - 48;
    else
        return -1;
}


/******************************* Not Mathematical way *************************************/
/*
    This is better approch then above


int hex(char hex[])
{
    int i = 0;
    while (hex[i])
    {
        switch (hex[i])
        {
        case 0:
            printf("0000");
            break;
        case '1':
            printf("0001");
            break;
        case '2':
            printf("0010");
            break;
        case '3':
            printf("0011");
            break;
        case '4':
            printf("0100");
            break;
        case '5':
            printf("0101");
            break;
        case '6':
            printf("0110");
            break;
        case '7':
            printf("0111");
            break;
        case '8':
            printf("1000");
            break;
        case '9':
            printf("1001");
            break;
        case 'A':
            printf("1010");
            break;
        case 'B':
            printf("1011");
            break;
        case 'C':
            printf("1100");
            break;
        case 'D':
            printf("1101");
            break;
        case 'E':
            printf("1110");
            break;
        case 'F':
            printf("1111");
            break;
        
        default:
            printf("INVALID");
            break;
        }
        i++;
    }
}
int main()
{
    char a[20];
    // Input Section
    printf("Enter the hex digit: ");
    scanf("%s", a);
    hex(a);

    return 0;
}

*/