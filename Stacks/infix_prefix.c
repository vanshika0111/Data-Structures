// program to convert an infix expression into a prefix expression

/*
Algorithm to convert an infix expression to prefix:
    1. Infix expression:                                                  a+b
    2. Place '(' & ')' in the beginning & end of the expression:         (a+b)
    3. Reverse the string:                                               )b+a(
    4. Replace "( --> )" & ") --> (":                                    (b+a)
    5. Convert this infix into a postfix expression:                      ba+
    6. Reverse the output string which gives a prefix expression:         +ab
*/

// ---------------- header files---------------- 
#include <stdio.h>
#include <ctype.h>
#include <string.h>

// ---------------- global declarations---------------- 
char stack[30]; 
char infix[30], *infix_pointer, x;    // --> infix to postfix
int reverse_stack[30];                           // --> reverse
int top=-1;

// ---------------- function prototype---------------- 
void push(char);
char pop(void);
void reverse(char infix[]);
int priority(char);
void InsertBraces(void);
char InfixToPostfix(void);

// ---------------- main function---------------- 
int main()
{
    // taking an infix expression from the user
    printf("Enter an infix expression: ");
    scanf("%s", infix);
    printf("\n");

    // reversing the stack
    reverse(infix);

    // converting an infix expression to postfix
    infix_pointer = infix;
    InfixToPostfix();
    printf(" is the postfix expression. \n");

    // reversing postfix to obtain prefix
    // reverse();
    
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

void reverse(char infix[])
{
    int i;
    char element;
    // for(i=0; i<'\0'; i++)
    // {
    //     push(reverse_stack[i]);
    // }
    for(i=0; i<'\0'; i++)
    {
        element = pop();
        reverse_stack[i] = element;
    }
    printf("The reversed expression is: ");
    for(i=0; i<'\0'; i++)
    {
        printf("%c ", reverse_stack[i]);
    }
    printf('\n');
}

char InfixToPostfix(void)
{
    while (*infix_pointer != '\0')
    {
        if (isalnum(*infix_pointer))
        {
            printf("%c", *infix_pointer);
        }
        else if (*infix_pointer == '(')
        {
            push (*infix_pointer);
        }
        else if (*infix_pointer == ')')
        {
            while( (x = pop() ) != '(')
            {
                printf("%c", x);
            }
        }
        else
        {
            while (priority(stack[top]) >= priority(*infix_pointer))
            {
                printf("%c", pop());
            }
            push(*infix_pointer);
        }   
        infix_pointer++;     
    }
    while (top != -1)
    {
        printf("%c", pop());
    }
}

void InsertBraces(void)
{
    
}