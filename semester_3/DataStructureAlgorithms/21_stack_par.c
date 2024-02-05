/*
 *  Author      :   Aakash Chauhan
 *  Date        :   August 24, 2023
 *  Problem     :   Valid paranthesis (using stack)
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 10
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

// Decleration of functions
int push(char[], char, int);
int pop(char[], int);
int isValid(char *);

int main()
{
    // Local decleration
    char string[MAX], stack[MAX];
    int i, top = -1;

    // Input Section
    printf("Enter the String: ");
    gets(string);

    // calling
    if (isValid(string))
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
    top--;
    return top;
}

int isValid(char *s)
{
    // Function using stack
    /*
        if left bracket is there then push its matching left
        if right is there and equal to the value at top then pop if not same then return false

        at last if stack is empty(-1) then it is valid (all in pair) other wise false
    */
    char *stack;
    stack = (char *)malloc(strlen(s));
    int i, top = -1;

    for (i = 0; s[i]; i++)
    {
        if (s[i] == '{')
            top = push(stack, '}', top);
        else if (s[i] == '[')
            top = push(stack, ']', top);
        else if (s[i] == '(')
            top = push(stack, ')', top);
        else if (top >= 0 && s[i] == stack[top])
            top--;
        else
            return 0;
    }
    if (top == -1)
        return 1;
    return 0;
}