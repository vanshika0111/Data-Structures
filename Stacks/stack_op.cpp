// program to illustrate all the operations of stack in one program

#include<iostream>
#define MAX 5
using namespace std;

// global declaration
int stack[MAX] = {1,2,3,4}, top=3, i, value, choice;

// function protoype
void choice_list(void);
int push(int stack[], int value);
int pop(int stack[]);
int peek(int stack[]);
void display(void);

int main()
{
    do
    {
        choice_list();
        switch (choice)
        {
        case 1:
            push(stack, value);
            break;
        
        default:
            break;
        }
    } while (choice != 5);
    
    return 0;
}

void choice_list(void)
{
    cout << "List of operations performed on stack is: " << endl;
    cout << "1. Push" << endl
         << "2. Pop" << endl
         << "3. Peek" << endl
         << "4. Display" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    cout << endl;
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