// peek 

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
using namespace std;

int main()
{
    int stack[10], top, i, size, MAX=10;

    cout << "Enter size of the stack: ";
    cin >> size;
    cout << endl;

    cout << "Enter elements of the stack: " << endl;
    for(i=0; i<size; i++)
    {
        cout << "Element " << i+1 << ": " ;
        cin >> stack[i];
    }

    cout << "Displaying stack: " << endl;
    for(i=0; i<size; i++)
    {
        cout << stack[i] << endl;
    }

    cout << "Peek" << endl;
    if(top == -1)
    {
        cout << "Stack underflow" << endl;
        // return -1;
    }
    else
    {
        cout << "The top-most element of the stack is " << stack[top] << endl;
        // return stack[top];
        
    }


    return 0;
}