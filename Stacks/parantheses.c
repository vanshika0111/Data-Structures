// program to check the validity of expression --> parantheses checker

// ---------------- header files---------------- 
#include<stdio.h>

// ---------------- global declarations---------------- 
char stack[30]; 
int top=-1;

// ---------------- function prototype---------------- 
void push(char);
char pop();

// ---------------- main function---------------- 
int main()
{
    char expression[30], *exp;
    int valid;

    printf("Enter an expression: ");
    scanf("%s", &expression);
    printf("\n");

    exp = expression;
    while (*exp != '\0')
    {
        if ( *exp == '(' )
        {
            push (*exp);
        }
        else if ( *exp == ')' )
        {
            if(top == -1)
            {
                valid = 0;
                // return 0;
            }
            else
            {
                pop();
                valid  = 0;
            }            
        }
    }

    if (top == -1)
    {
        printf(" Balanced equation. \n");
    }
    else
    {
        printf("Unbalanced equation. \n");
    }
    

    if(valid == 1)
    {
        printf(" Valid expression. \n");
    }
    else
    {
        printf("Invalid expression. \n");
    }
    return 0;
}

// ---------------- function definitions----------------
void push(char x)
{
    stack[++top] = x;
} 

char pop()
{
    if (top == -1) { return -1; }
    else { return stack[top--]; }
}