// program to reverse a stack (using array) woth push & pop operations

// header files
#include<stdio.h>
#include<conio.h>

// global declaration
int stack[10], top=-1, i, size;
int stack_new[10], value;

// function prototype
void StackElements(void);
void Display(void);
int push(int);
int pop(void);

// main function
int main()
{
    // To ask for the size & elements of the stack
    StackElements();

    // To display the stack
    Display();

    // Pushing the elements one by one to another stack
    for(i=0; i<size; i++)
    {
        push(stack_new[i]);
    }

    // Popping the elements one by one
    for(i=0; i<size; i++)
    {
        value = pop();
        stack_new[i] = value;
    }

    printf("Displaying the reversed stack: \n");
    for(i=0; i<size; i++)
    {
        printf("%d ", stack_new[i]);
    }
    printf("\n --------- \n");
    return 0;
}

void StackElements(void)
{
    printf("Enter size of stack: ");
    scanf("%d", &size);
    printf("\n --------- \n");
    printf("Enter elements of stack: \n");
    for(i=0; i<size; i++)
    {
        printf("Element %d: ", i+1);
        scanf("%d", &stack[i]);
    }
    printf("\n ------------ \n");
}

void Display(void)
{
    for(i=0; i<size; i++)
    {
        printf("%d ", stack[i]);
    }
    printf("\n --------- \n");
}

int push(int value)
{
    stack[++top] = value;
}

int pop(void)
{
    return (stack[top--]);
}