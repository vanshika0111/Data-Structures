// pop ~ deletion using array

/*
Deletion:
    Always the top-most element is deleted in pop opeartion.
    Thus, there's no need to ask which element is to be deleted.
    Before deletion, always check if the stack is empty.
    If it's full, only then pop operation will work.
    Else, it will give rise to an error "UNDERFLOW".
    As an empty stack has no elements to delete.
*/

#include<iostream>
#include<stdlib.h>
# define MAX 5
using namespace std;

// global declaration
int stack[MAX] = {}, top=-1, i, value;        // --> for underflow case
// int stack[MAX] = {1,2,3,4,5}, top=4, i, value;   // --> for deletion case

// function prototype
int pop(int stack[]);
void display(void);

int main()
{
    value = pop(stack);
    if (value != 1)
    {
        cout << "The element deleted from the stack is " << value << endl;
    }
    display();
    return 0;
}

int pop(int stack[])
{
    if (top == -1)
    {
        cout << "Stack underflow" << endl;
        return -1;
    }
    else
    {
        value = stack[top];
        top--;
        // cout << "Value deleted from the stack is " << value << endl;
        return value;
    }
}

// The last element is just skipped after popping, it is not actually deleted.

void display(void)
{
    if (top == -1)
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "Stack:" << endl;
        cout << "[ ";
        for(i=0; i<MAX-1; i++)
        {          
            cout << stack[i] << " " ;
        }
        cout << "]" << endl;
    }
}