// program to illustrate all the operations of stack in one program

// --------------------------- header files -------------------------
#include<stdio.h>
#define MAX 5

// --------------------------- global declaration -------------------------
int stack[MAX] = {1,2,3,4}, top=3, i, value, choice;

// --------------------------- function protoype ---------------------------
void choice_list(void);
int push(int stack[], int value);
int pop(int stack[]);
int peep(int stack[]);
void display_push(void);
void display_pop(void);
// instead use one display function for both push and pop

// --------------------------- main function -------------------------
int main()
{
    do
    {
        choice_list();
        switch (choice)
        {
            case 1:
                printf ("Enter a number to be pushed into the stack: ");
                scanf ("%d", &value);
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
                    printf ("The top pointing element of the stack is %d \n", value);
                }
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("Invalid choice! \n");
                break;
        }
    } while (choice != 4);
    
    return 0;
}

// --------------------------- function definitions -------------------------
void choice_list(void)
{
    printf ("------------------------------------------ \n");
    printf ("List of operations performed on stack is: \n");
    printf ("1. Push \n");
    printf ("2. Pop \n");
    printf ("3. Peep \n");
    printf ("4. Exit\n");
    printf ("Enter your choice: ");
    scanf ("%d", &choice);
    printf ("\n");
}

int push(int stack[], int value)
{
    if(top == MAX - 1)
    {
        printf ("Stack overflow! \n");
        top == -1;
    }
    else
    {
        top++;
        stack[top] = value;
        printf ("Value inserted is %d \n", value );
    }
}

int pop(int stack[])
{
    if (top == -1)
    {
        printf ("Stack underflow \n");
        return -1;
    }
    else
    {
        value = stack[top];
        top--;
        printf ("Value deleted from the stack is %d \n", value);
        return value;
    }
}

int peep(int stack[])
{
    if(top == -1)
    {
        printf ("Stack is empty \n");
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
        printf ("Stack is empty \n");
    }
    else
    {
        printf ("Stack:" );
        printf ("[ ");
        for(i=0; i<MAX; i++)
        {          
            printf (" %d ", stack[i]);
        }
        printf ("] \n");
    }
}

void display_pop(void)
{
    if (top == -1)
    {
        printf ("Stack is empty \n");
    }
    else
    {
        printf ("Stack:");
        printf ("[ ");
        for(i=0; i<MAX-1; i++)
        {          
            printf (" %d ", stack[i]);
        }
        printf ("] \n"); 
    }
}
