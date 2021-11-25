int dequeue_Circular(void)
{
    if ( front == -1 || front == rear + 1)
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
            front = front + 1;
        }
        cout << "Element deleted is " << value << endl;
    }
}