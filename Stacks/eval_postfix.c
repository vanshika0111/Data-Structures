// program to evaluate a postfix expression

// ---------------- header files---------------- 
#include<stdio.h>
#include<ctype.h>

// ---------------- global declarations---------------- 
char stack[30];
// char expression[30], *exp;
int top=-1;
float value;

// ---------------- function prototype---------------- 
void push(float);
char pop(void);
float evaluate(void);

// ---------------- main function---------------- 
int main()
{
    char expression[30], *exp;
    printf("Enter a postfix expression to evaluate: ");
    scanf("%s", &expression);
    exp = expression;
    printf("\n");
    printf("The value of postfix expression is ", evaluate());
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
    char *exp;
    float operand1, operand2, answer;

    while (*exp != '\0')
    {
        if (isdigit(*exp))
        {
            push(*exp - '0');
        }
        else
        {
            operand2 = pop();
            operand1 = pop();
            switch(*exp)
            {
                case '*':
                    answer = operand1 * operand2;
                    break;
                case '/':
                    answer = operand1 / operand2;
                    break;
                case '+':
                    answer = operand1 + operand2;
                    break;
                case '-':
                    answer = operand1 - operand2;
                    break;              
            }
            push(answer);
        }
        exp++;
    }
    return (pop());  
}