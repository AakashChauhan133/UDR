/*
 *  Name		:  	Devansh Karki
 *  Sec		:	Cyber
 *  Roll no.	:	47
 *  Conversion of infix to postfix using stack
 */

#include <stdio.h>
#define MAX 100

int valid_input(char[]);
void convert(char[], char[]);
void push(char[], int *top, char);
char pop(char[], int *top);
int presidency(char);

int main()
{
    char infix[MAX], postfix[MAX] = {0}; // Initialising postfix with 0,0,0,0, ...

x:
    printf("Enter the expersion in the form of infix format \n");
    printf("Note: Allowed charachers A-Z, +, -, /, *, ),(,%% , ^\n");
    gets(infix);

    // Checking is valid otherwise return to lable x ie. input section
    if (!valid_input(infix))
        goto x;

    // Calling function to convert infix to postfix using stack data structure
    convert(infix, postfix);

    printf("Postfix: ");
    puts(postfix);
    return 0;
}

int valid_input(char str[])
{
    int i;
    for (i = 0; str[i]; i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
            continue;
        if (str[i] != '+' && str[i] != '-' && str[i] != '*' && str[i] != '/' && str[i] != ')' && str[i] != '(' && str[i] != '%' && str[i] != '^')
            return 0;
    }
    return 1;
}

void convert(char infix[], char postfix[])
{
    char stack[MAX], ch;
    int top = -1, i, p;

    // Step 1:  add ) to the infix
    for (i = 0; infix[i]; i++)
        ;
    infix[i] = ')';
    infix[i + 1] = 0;

    // Step 2:  pushing ( in stack
    push(stack, &top, '(');

    // Step 3:  Looping till ) is not reached in infix, treversing from left to right
    i = 0;
    p = 0;

    while (infix[i])
    {
        if (infix[i] >= 65 && infix[i] <= 90) // Then add it to postfix
        {
            postfix[p++] = infix[i];
        }
        else if (infix[i] == '(') // Then push it to stack
        {
            push(stack, &top, infix[i]);
        }
        else if (infix[i] == ')') // Then pop from stack till ( encounter and add popped values to postfix
        {
            while ((ch = pop(stack, &top)) != '(')
            {
                postfix[p++] = ch;
            }
        }
        else // If we get any operator then we have 2 case as per presidency
        {
            while (presidency(stack[top]) >= presidency(infix[i])) // If current presidency is less or equal then top one then pop top first and add it to postfix
            {
                postfix[p++] = pop(stack, &top);
            }
            push(stack, &top, infix[i]); // After popping or not that case you have to push current in stack
        }
        i++;
    }
}

char pop(char stack[], int *top)
{
    if (*top == -1)
    {
        printf("Empty\n");
        return 0;
    }
    (*top)--;
    return stack[*top + 1];
}

void push(char stack[], int *top, char ch)
{
    if (*top == MAX - 1)
    {
        printf("Stack full\n");
        return;
    }
    (*top)++;
    stack[*top] = ch;
}

int presidency(char ch)
{
    if (ch == '*' || ch == '/' || ch == '^')
        return 3;
    if (ch == '+' || ch == '-')
        return 2;
    if (ch == '^')
        return 1;
    if (ch == '(' || ch == ')')
        return 0;
}