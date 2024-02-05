/*
 *  Author  :   Aakash Chauhan
 *  Date    :   September 08, 2023
 *  Time    :   04:38
 *  Evaluation of postfix expression using stack
 */

#include <stdio.h>
#include <math.h>
#define MAX 100

//  +---------------+---------------+---------------+---------------+
//  |               |   Uppercase   |   Lower case  |  Numeric case |
//  +---------------+---------------+---------------+---------------+
//  |   CASE_START  |       65      |       97      |       48      |
//  +---------------+---------------+---------------+---------------+
//  |   CASE_END    |       90      |       122     |       57      |
//  +---------------+---------------+---------------+---------------+
#define CASE_START 65
#define CASE_END 90

int valid_input(char[]);
int evaluate(char[]);
void push(int[], int *, int);
int pop(int[], int *);
int operate(int, int, char);

int main()
{
    // Local decleration
    char postfix[MAX];
    int ans;

    // Input Section
x: // lable to redirect if invalid input
    printf("Enter a valid postfix expression: ");
    gets(postfix);

    // Checking is valid otherwise return to lable x ie. input section
    if (!valid_input(postfix))
        goto x;

    // Calling function to convert infix to postfix using stack data structure
    ans = evaluate(postfix);

    // Output section
    printf("Answer: %d\n", ans);

    return 0;
}

int valid_input(char str[])
{
    // function to check if characters in str are in defined case or allowed operators
    int i;
    for (i = 0; str[i]; i++)
    {
        if (str[i] >= CASE_START && str[i] <= CASE_END)
            continue;
        if (str[i] != '+' && str[i] != '-' && str[i] != '*' && str[i] != '/' && str[i] != '%' && str[i] != '^')
            return 0;
    }
    return 1;
}

int evaluate(char postfix[])
{
    int stack[MAX];
    int top = -1, i, val, _val_;

    // Step 1: Add ( to the postfix
    for (i = 0; postfix[i]; i++)
        ;

    // Step 2: Scanning all elements of postfix from left till ) is encounterd
    i = 0;
    while (postfix[i])
    {
        // If operant is encounterd the get value and push it to stack
        if (postfix[i] >= CASE_START && postfix[i] <= CASE_END)
        {
            printf("Enter the value of %c: ", postfix[i]);
            scanf("%d", &val);
        }
        else
        {
            val = pop(stack, &top);
            _val_ = pop(stack, &top);
            val = operate(val, _val_, postfix[i]);
        }
        // either val is scaned or calculated push it back to the stack
        push(stack, &top, val);
        i++;
    }
    // as we have pushed calculaed value back to the stack so we have answer at the top of the stack

    return pop(stack, &top);
}

void push(int stack[], int *top, int val)
{
    // Simple function to push intiger val in stack with MAX bound check
    if (*top == MAX - 1)
    {
        printf("Stack full\n");
        return;
    }
    (*top)++;
    stack[*top] = val;
}
int pop(int stack[], int *top)
{
    // Simple popping function with empty check
    if (*top == -1)
    {
        printf("Empty\n");
        return 0;
    }
    (*top)--;
    return stack[(*top) + 1];
}

int operate(int x, int y, char op)
{
    // conversion of character into working operator
    if (op == '-')
        return (y - x);
    if (op == '+')
        return (y + x);
    if (op == '*')
        return (y * x);
    if (op == '/')
        return (y / x);
    if (op == '%')
        return (y % x);
    if (op == '^')
        return (pow(y, x));
}
