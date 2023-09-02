#include <stdio.h>

int main()
{
    int a, b, ch;
    float x;
    printf("Enter the numbers\n");
    scanf("%d%d", &a, &b);

    printf("Press 1 for addition\n");
    printf("Press 2 for substraction\n");
    printf("Press 3 for product\n");
    printf("Press 4 for division\n");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        a = a+b;
        printf("sum = %d", a);
        break;
        
    case 2:
        a = a-b;
        printf("sub = %d", a);
        break;
        
    case 3:
        a = a*b;
        printf("prod = %d", a);
        break;
        
    case 4:
        x = (float)a/b;
        printf("div = %f", x);
        break;
    default:
        printf("invalid");
    }

    return 0;
}