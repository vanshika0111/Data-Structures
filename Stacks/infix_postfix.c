// program to convert an infix expression into a postfix expression

// ---------------- header files---------------- 
#include <stdio.h>
#include <ctype.h>

// ---------------- global declarations---------------- 
char stack[30];
int top=-1;

// ---------------- function prototype---------------- 
void push(char);
char pop(void);
int priority(char);

// ---------------- main function---------------- 
int main()
{
    char postfix[30], *pf, x;
    printf("Enter the expression: ");
    scanf("%s", &postfix);
    printf("\n");

    pf = postfix;

    while (*pf != '\0')
    {
        if (isalnum(*pf))
        {
            printf("%c", *pf);
        }
        else if (*pf == '(')
        {
            push (*pf);
        }
        else if (*pf == ')')
        {
            while( (x = pop() ) != '(')
            {
                printf("%c", x);
            }
        }
        else
        {
            while (priority(stack[top]) >= priority(*pf))
            {
                printf("%c", pop());
            }
            push(*pf);
        }   
        pf++;     
    }
    while (top != -1)
    {
        printf("%c", pop());
    }

    return 0;
}

// ---------------- function definitions---------------- 
void push (char x)
{
    stack[++top] = x;
}

char pop (void)
{
    if (top == -1) { return -1; }
    else { return stack[top--]; }
}

int priority(char x)
{
    if (x == '(') { return 0; }                 // --> marks the priority of '(' as 0
    if (x == '+' || x == '-') { return 1; }     // --> marks the priority of '+' & '-' as 1
    if (x == '*' || x == '/') { return 2; }     // --> marks the priority of '*' & '/' as 2
}