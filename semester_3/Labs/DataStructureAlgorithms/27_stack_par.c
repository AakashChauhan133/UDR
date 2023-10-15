#include <stdio.h>
#include <string.h>
#define     MAX     10
/*
 *  Input   "{{}}"
 *  Output  True
 *
 *  Input   "{{{{}}}"
 *  Output  False
 *
 *  Input   "{()}"
 *  Output  True
 */

int push(char [], char, int);
int pop(char [], int);

int main()
{
    char string[MAX], stack[MAX];
    int i, top = -1;
    printf("Enter the String: ");
    gets(string);

    for (i = 0; string[i] !=  0; i++)
    {
        if (string[i] == '(' || string[i] == '{' || string[i] == '[')
            top = push(stack, string[i], top);
        else if (string[i] == '}')
        {
            if (stack[top] == '{')
                top = pop(stack, top);
            else
                break;
        }else if (string[i] == '}')
        {
            if (stack[top] == '{')
                top = pop(stack, top);
            else
                break;
        }

        else if (string[i] == ')')
        {
            if (stack[top] == '(')
                top = pop(stack, top);
            else
                break;
        }
        else if (string[i] == ']')
        {
            if (stack[top] == '[')
                pop(stack, top);
            else
                break;
        }
    }
    printf("t%d i%d len%d\n", top, i, strlen(string));
    if (i == strlen(string) && top == -1)
    {
        printf("Valid\n");
    }
    else
        printf("Not valid\n");

    return 0;
}

int push(char stack[], char val, int top)
{
    if (top == MAX - 1)
    {
        printf("Stack is full\n");
        return top;
    }
    top++;
    stack[top] = val;
    return top;
}
int pop(char stack[], int top)
{
    if (top == -1)
    {
        printf("Stack is empty");
        return top;
    }
    top --;
    return top;
}

