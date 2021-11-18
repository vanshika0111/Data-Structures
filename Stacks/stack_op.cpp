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
int peep(int stack[]);
void display_push(void);
void display_pop(void);
// instead use one display function for both push and pop

int main()
{
    do
    {
        choice_list();
        switch (choice)
        {
            case 1:
                cout << "Enter a number to be pushed into the stack: ";
                cin >> value;
                push(stack, value);
                display_push();
                break;
            case 2:
                value = pop(stack);
                display_pop();
                break;
            case 3:
                value = peep(stack);
                if (value != 1)
                {
                    cout << "The top pointing element of the stack is " << value << endl;
                }
                break;
            case 4:
                exit(0);
                break;
            default:
                cout << "invalid choice!" << endl;
                break;
        }
    } while (true);
    
    return 0;
}

void choice_list(void)
{
    cout << "------------------------------------------" << endl;
    cout << "List of operations performed on stack is: " << endl;
    cout << "1. Push" << endl
         << "2. Pop" << endl
         << "3. Peep" << endl
         << "4. Exit" << endl;
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
        cout << "Value deleted from the stack is " << value << endl;
        return value;
    }
}

int peep(int stack[])
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

void display_push(void)
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

void display_pop(void)
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
