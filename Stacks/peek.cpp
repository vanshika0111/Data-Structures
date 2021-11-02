// peek using array

/*
PEEK
    It only displays the top-most element of the stack.
    Before applying, always check if the stack is empty.
    If it's full, only then peek operation will work.
    Else, it will give rise to an error "UNDERFLOW".
    As an empty stack has no elements to display.
*/

#include<iostream>
#include<stdlib.h>
# define MAX 5
using namespace std;

// global declaration
// int stack[MAX] = {}, top=-1, value;        // --> for underflow case
int stack[MAX] = {1,2,3,4,5}, top=4, value;   // --> for peek case

// function prototype
int peek(int stack[]);

int main()
{
    value = peek(stack);
    if (value != 1)
    {
        cout << "The top pointing element of the stack is " << value << endl;
    }
    return 0;
}

int peek(int stack[])
{
    if(top == -1)
    {
        cout << "Stack is empty" << endl;
        return -1;
    }
    else
    {
        // cout << "The top pointing element of the stack is " << value << endl;
        return stack[top];
    }
}