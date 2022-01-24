// program for stack 

#include<iostream>
#define MAX 5
using namespace std;

int stack[MAX], value, TOP=-1;

int push(int);
int pop(void);
int peep(void);
void display_push(void);
void display_pop(void);

int main()
{
    int choice;
    do 
    {
        cout << "STACK IMPLEMENTATION" << endl;
        cout << "Choice list:" << endl
         << "1. Push" << endl 
         << "2. Pop" << endl 
         << "3. Peep" << endl
         << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout << endl;
        switch (choice)
        {
            case 1:
                cout << "Enter a number to insert: ";
                cin >> value;
                cout << endl;
                push(value);
                display_push();
                break;
            case 2:
                pop();
                display_pop();
                break;
            case 3:
                peep();
                break;
            case 4:
                cout << "Exiting... " << endl;
                exit(0);
                break;
            default: 
                cout << "Invalid choice!" << endl;
                break;
        }
    } while (true);

    return 0;
}

int push(int value)
{
    if (TOP == MAX - 1)
    {
        cout << "Stack overflow!" << endl;
    }
    else
    {
        TOP++;
        stack[TOP] = value;
        cout << "Value inserted in stack is " << value << endl;
    }
}

int pop(void)
{
    if (TOP == -1)
    {
        cout << "Stack underflow!" << endl;
    }
    else
    {
        value = stack[TOP];
        TOP--;
    }
}

int peep(void)
{
    if (TOP == -1)
    {
        cout << "Stack empty!" << endl;
    }
    else
    {
        cout << "Top pointing element is " << stack[TOP] << endl;
    }
}

void display_push(void)
{
    if (TOP == -1)
    {
        cout << "Empty Stack! " << endl;
    }
    else
    {
        cout << "Stack: [ ";
        for (int i=0; i<MAX; i++)
        {
            cout << stack[i] << " ";
        }
        cout << "]" << endl;
    }
}

void display_pop(void)
{
    if (TOP == -1)
    {
        cout << "Empty Stack! " << endl;
    }
    else
    {
        cout << "Stack: [ ";
        for (int i=0; i<TOP+1; i++)
        {
            cout << stack[i] << " ";
        }
        cout << "]" << endl;
    }
}