// program to evaluate a postfix expression

// ---------------- header files---------------- 
#include<stdio.h>
#include<ctype.h>

// ---------------- global declarations---------------- 
char stack[30];
int top=-1;
float value;

// ---------------- function prototype---------------- 
void push(float);
char pop(void);
float evaluate(void);

// ---------------- main function---------------- 
int main()
{
    printf("Enter a postfix expression to evaluate: ");
    scanf("%s", &stack);
    printf("\n");
    return 0;
}

// ---------------- function definitions---------------- 
void push(float value)
{
    stack[++top] = value;
}

char pop(void)
{
    if (top == -1) { return -1; }
    else { return stack[top--]; }
}

float evaluate(void)
{

}