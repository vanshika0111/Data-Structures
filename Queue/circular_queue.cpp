// program to implement Circular Queue using array to perform the following operations: (a) INSERT (b) DELETE (c) DISPLAY
//  REAR --> Insertion  FRONT --> Deletion

// --------------------------- header files -------------------------
#include<iostream>
#define MAX 5
using namespace std;

// --------------------------- global declarations -------------------------
int queue[MAX], i, value, choice;
int front = -1, rear = -1;

// --------------------------- function prototype -------------------------
void ChoiceList(void);
int enqueue_Circular(int);
int dequeue_Circular(void);
void display_Circular(void);

// --------------------------- main function -------------------------
int main()
{
    do 
    {
        ChoiceList();
        switch (choice)
        {
            case 1:
                cout << "Enter a number to be inserted: ";
                cin >> value;
                cout << "front = " << front << " rear = " << rear << endl;
                enqueue_Circular(value);
                display_Circular();
                break;
            case 2:
                cout << "front = " << front << " rear = " << rear << endl;
                value = dequeue_Circular();
                display_Circular();
                break;
            case 3:
                cout << "front = " << front << " rear = " << rear << endl;
                display_Circular();
                break;
            case 4:
                exit(0);
                break;       
            default:
                cout << "Invalid choice!" << endl;
                exit(0);
                break;
        }
    } while (true);
    return 0;
}

// --------------------------- function definitions -------------------------
void ChoiceList(void)
{
    cout << endl;
    cout << " ---------------------------------------" << endl
         << "List of operations performed on circular queue: " << endl
         << "1. Enqueue " << endl
         << "2. Dequeue " << endl
         << "3. Display " << endl
         << "4. Exit" << endl
         << "Enter your choice: ";
    cin >> choice;
    cout << endl;
    cout << endl;
}

int enqueue_Circular(int value)
{
    if( ( front == 0 && rear == MAX-1 ) || ( front == rear+1 ) )
    // if( front == 0 && rear == MAX-1 )
    {
        cout << "Queue overflow!" << endl;
    }
    else
    {
        if (front == -1 && rear == -1)
        {
            // cout << "condition 1 " << endl;
            front = 0;
            rear = 0;
        }
        else if( rear != MAX-1 )
        {
            // cout << "condition 2 " << endl;
            rear++;
        }
        else if (rear == MAX - 1 && front != 0)
        {
            // cout << "condition 3 " << endl;
            rear = 0;
        }
        queue[rear] = value;
        cout << "Value inserted is " << value << endl;
    }
    return value;
}

int dequeue_Circular(void)
{
    // if ( front == -1 || front == rear + 1)
    if ( front == -1 && rear == -1)
    {
        cout << "Queue underflow!" << endl;
    }
    else
    {
        value = queue[front];
        if ( front == rear)
        {
            front = -1;
            rear = -1;
        }
        else if ( front == MAX - 1)
        {
            front = 0;
        }
        else
        {
            queue[front]=0;
            front++;
        }
        cout << "Element deleted is " << value << endl;
    }
    return value;
}

void display_Circular(void)
{
    // // if ( front == -1 || front == rear + 1 )
    // if ( front == -1 && rear == -1)
    // {
    //     cout << "Queue is empty!" << endl;
    // }
    // else
    // {
    //     cout << "[ ";
    //     if (front < rear)
    //     {
    //         for (i = front; i <= rear; i++)
    //         {
    //             cout << "Condiiton 1 in display" << endl;
    //             cout << queue[i] << " ";
    //         }
    //     }
    //     else
    //     {
    //         for (i = front; i < MAX; i++)
    //         {
    //             cout<<"condition 2 in display"<<endl;
    //             cout << queue[i] << " ";
    //         }
    //         for (i = 0; i <= rear; i++)
    //         {
    //             cout << queue[i] << " ";
    //         }
    //     }
    //     cout << "]" << endl;
    // }
    cout << "[ ";
    for(int i=0; i<MAX; i++){
        cout << queue[i] << " " ;
    }
    cout << "]" << endl;
}