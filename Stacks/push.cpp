// push ~ insertion

/*
Insertion:
    The new element is always added at the top-most position of the stack.
    Before inserting, always check if the stack is empty.
    If it's empty, only then insertion can be performed.
    Else, it give rise to an error of "OVERFLOW".
*/

#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int stack[10], top=-1, MAX=10, new_element;


    cout << "Enter the number to be inserted in the stack: ";
    cin >> new_element;
    cout << endl;

    cout << "PUSHING ~ INSERTION" << endl;
    if (top == MAX-1)
    {
        cout << "STACK OVERFLOW";
    }
    else
    {
        top++;
        stack[top] = new_element;
    }

    cout << "Dispalying the stack: " << endl;
    cout << stack[top] << endl;

    return 0;
}