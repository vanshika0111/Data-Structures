#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int main()
{
    int queue[MAX], i, front=-1, rear=-1, new_element, size;

    printf("Enter size of queue: ");
    scanf("%d", &size);

    printf("Enter elements pf queue: ");
    for(i=0; i<size; i++)
    {
        printf("Element %d: ", i+1);
        scanf("%d", &queue[i]);
    }
    printf("\n ------ \n");

    if(size == 0)
    {
        printf("queue is empty");
    }
    else
    {
        printf("Enter element to insert: \n");
        scanf("%d", &new_element);
        printf("\n ----------- \n");
    }

    if(new_element != 0)
    {
        printf("Starting insertion... \n");
        if( ( (front == 0) && (rear == MAX-1) ) || (front == rear+1))
        {
            printf("Queue overflow!");
        }
        else if ( (front = -1) && (rear = -1))
        {
            front = 0;
            rear = 0;
            queue[rear] = new_element;
        }
        else if ( (rear = MAX - 1) && (front != 0))
        {
            rear = 0;
            queue[rear] = new_element;
        }
        else
        {
            rear = rear+1;
            queue[rear] = new_element;
        }
        printf("Insertion done \n");
        printf("Value inserted is %d", new_element);
        printf("\n ---------- \n");
    }
    else
    {
        printf("insertion not done \n");
    }
    return 0;
}
