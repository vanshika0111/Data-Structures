// program to illustrate all the operations of queue in one program

// --------------------------- header files -------------------------
#include<iostream>
#define MAX 5
using namespace std;

// --------------------------- global declaration -------------------------
int queue[MAX] = {1,2,3,4}, i, value, choice;
int front = 0, rear = 3;

// --------------------------- function prototype -------------------------
void ChoiceList(void);
int enqueue(int);
int dequeue(void);
void display(void);

// --------------------------- main function -------------------------
int main()
{
    cout << "Queue: ";
    display();
    do
    {
        ChoiceList();
        switch (choice)
        {
            case 1:
                cout << "Enter a number to be inserted: ";
                cin >> value;
                enqueue(value);
                display();
                break;
            case 2:
                value = dequeue();
                display();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
                break;
            default:
                cout << "invalid choice!" << endl;
                exit(0);
                break;
        }
    } while (true);
    
    return 0;
}

// --------------------------- function definitions -------------------------
void ChoiceList(void)
{
    cout << " ---------------------------------------" << endl
         << "List of operations performed on queue: " << endl
         << "1. Enqueue " << endl
         << "2. Dequeue " << endl
         << "3. Display " << endl
         << "4. Exit" << endl
         << "Enter your choice: ";
    cin >> choice;
    cout << endl;
}

int enqueue(int)
{
    if (rear == MAX - 1)
    {
        cout << "Queue overflow!" << endl;
    }
    else 
    {
        if (rear = front == -1)
        {
            rear = 0;
            front = 0;
        }
        else 
        {
            rear = rear + 1;
        }
        queue[rear] = value;
        cout << "Value inserted is " << value << endl;
    }
}

int dequeue(void)
{
    if (front == -1 || front > rear)
    {
        cout << "Queue underflow!" << endl;
    }
    else
    {
        value = queue[front];
        front= front + 1;
        cout << "Element deleted is " << value << endl;
    }
}

void display(void)
{
    if (front == -1 || front > rear)
    {
        cout << "Queue underflow!" << endl;
    }
    else
    {
        cout << "[ ";
        for(i=0; i<MAX; i++)
        {
            cout << queue[i] << " ";
        }
        cout << "]" << endl;
    }

}