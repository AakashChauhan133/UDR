#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter the value of x, y: ");
    scanf("%d%d", &x, &y);

    printf("Ackerman: %d", ack(x, y));

    return 0;
}

ack(int x, int y)
{
    if (x == 0)
        return(y + 1);
    if (y == 0 && x > 0)
        return ack(x - 1,1);
    if (y > 0 && x > 0)
        return ack(x - 1, ack(x, y - 1));
}
