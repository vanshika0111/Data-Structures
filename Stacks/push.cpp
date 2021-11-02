// push ~ insertion using array

/*
Insertion:
    The new element is always added at the top-most position of the stack.
    Before inserting, always check if the stack is empty.
    If it's empty, only then insertion can be performed.
    Else, it give rise to an error of "OVERFLOW".
*/

/*
     use a do while loop instead of taking two different stacks for both conditions
     execute first push operation and then check for overflow condiiton
*/


#include<iostream>
using namespace std;
#define MAX 5

// global declaration
// int stack[MAX] = {1,2,3,4}, top=3, i, value;        // --> for insertion case
int stack[MAX] = {1,2,3,4,5}, top=4, i, value;   // --> for overflow case

// function prototype
int push(int stack[], int value);
void display(void);

int main()
{
    cout << "Enter a number to be pushed into the stack: ";
    cin >> value;
    push(stack, value);
    display();
    return 0;
}

int push(int stack[], int value)
{
    if(top == MAX - 1)
    {
        cout << "Stack overflow!" << endl;
        top == -1;
    }
    else
    {
        top++;
        stack[top] = value;
        cout << "Value inserted is " << value << endl;
    }
}

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
        for(i=0; i<MAX; i++)
        {          
            cout << stack[i] << " " ;
        }
        cout << "]" << endl;
    }
}