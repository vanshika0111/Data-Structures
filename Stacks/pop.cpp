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
using namespace std;

int main()
{
    int stack[10], top, i, size, MAX=10;
    // top=stack[size-1];
    // top=-1;

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

    cout << "Deletion process" << endl;
    if(top == -1)
    {
        cout << "Stack underflow" << endl;
    }
    else
    {
        cout << "Deleted element is "<< stack[top] << endl;
        top--;
    }

    return 0;
}