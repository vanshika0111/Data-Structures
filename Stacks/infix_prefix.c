// program to convert an infix expression into a prefix expression

// ---------------- header files---------------- 
#include <stdio.h>
#include <ctype.h>

// ---------------- global declarations---------------- 
char stack[30];
int top=-1;

// ---------------- function prototype---------------- 
void push(char);
char pop(void);
void reverse(void);
int priority(char);

// ---------------- main function---------------- 
int main()
{
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
    
}