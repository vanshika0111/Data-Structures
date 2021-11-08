// program to convert an infix expression into a prefix expression

/*
Steps to convert an infix expression to prefix:
    1. Infix expression:                                                  a+b
    2. Place '(', ')' in the beginning & end of the expression:          (a+b)
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
int top=-1, length;

// ---------------- function prototype---------------- 
void push(char);
char pop(void);
void reverse(void);
int priority(char);

// ---------------- main function---------------- 
int main()
{
    char expression;
    printf("Enter an infix expression: ");
    scanf("%s", &expression);
    length = strlen(expression);
    printf("\n");
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

void reverse(void)
{
    int i;
    for(i=length; i=0; i--)
    {
        printf("%s ", i);
    }
    
}