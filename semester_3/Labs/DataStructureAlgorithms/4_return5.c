#include <stdio.h>
#define     MAX     5

int* method1(int *);

int main()
{
    int ans[MAX];
    *ans = method1(ans);

    printf("Sum = %d\n", ans[0]);
    printf("Diff = %d\n", ans[1]);
    printf("Prod = %d\n", ans[2]);
    printf("Div = %d\n", ans[3]);
    printf("Mod = %d\n", ans[4]);

    return 0;
}
int* method1(int *n)
{
    int a, b;

    printf("Enter two numbers\n");
    scanf("%d%d", &a, &b);
    printf("sum in function %d\n", a + b);
    n[0] = a + b;
    n[1] = a - b;
    n[2] = a * b;
    n[3] = a / b;
    n[4] = a % b;

    return *n;
}
