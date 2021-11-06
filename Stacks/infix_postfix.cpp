// ---------------- header files----------------
#include<iostream>
#include <ctype.h>
using namespace std;

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
    char expression[30], *exp, x;
    cout << "Enter the expression: ";
    cin >> expression;
    cout << endl;

    exp = expression;

    while (*exp != '\0')
    {
        if (isalnum(*exp))
        {
            cout << *exp;
        }
        else if (*exp == '(')
        {
            push (*exp);
        }
        else if (*exp == ')')
        {
            while( (x = pop() ) != '(')
            {
                cout << x;
            }
        }
        else
        {
            while (priority(stack[top]) >= priority(*exp))
            {
                cout << pop();
            }
            push(*exp);
        }   
        exp++;     
    }
    while (top != -1)
    {
        cout << pop();
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
    if (x == '*' || x == '/') { return 1; }     // --> marks the priority of '*' & '/' as 1
    if (x == '+' || x == '-') { return 2; }     // --> marks the priority of '+' & '-' as 2
    
}