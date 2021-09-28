// implementation of stack using arrays

#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

// underflow condition
int isEmpty(struct stack* ptr)
{
    if(ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// overflow condition
int isFull(struct stack* ptr)
{
    if(ptr->top == ptr->size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    // creating an object
    // struct stack s;
    // s.size = 80;
    // s.top = -1;  // denotes an empty stack
    // s.arr = (int *)malloc(s.size* sizeof(int));

    // creating a pointer
    struct stack *s;
    s->size = 80;
    s->top = -1;  // denotes an empty stack
    s->arr = (int *)malloc(s->size* sizeof(int));

    // to check if the stack is empty
    if(isEmpty(s))
    {
        printf("Underflow!");
    }
    else
    {
        printf("Overflow!");
    }
    return 0;
}