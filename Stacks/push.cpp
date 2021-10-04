// push ~ insertion using array

/*
Insertion:
    The new element is always added at the top-most position of the stack.
    Before inserting, always check if the stack is empty.
    If it's empty, only then insertion can be performed.
    Else, it give rise to an error of "OVERFLOW".
*/

#include<iostream>
#include<stdlib.h>
using namespace std;

// CASE 1: Stack size is taken from the user
int main()
{
    int stack[10], top=-1, MAX=10, new_element;
    int size, i;

    printf("Enter the size of stack: ");
    scanf("%d", &size);
    printf("\n ------------- \n");

    printf("Enter elements of stack: \n");
    for(i=0; i<size; i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", &stack[i]);
    }

    printf("\n ------------ \n");
    cout << "Enter the number to be inserted in the stack: ";
    cin >> new_element;
    cout << endl;

    cout << "PUSHING ~ INSERTION" << endl;
    if (top == MAX-1)
    {
        cout << "STACK OVERFLOW";
    }
    else
    {
        stack[top] = new_element;
        top++;
        // stack[size] = new_element;
        // size++;  
    }
    // size++;
   
    
    cout << "Dispalying the stack: " << endl;
    for(i=0; i<size; i++)
    {
        printf("%d ", stack[i]);
    }

    return 0;
}

// CASE 2: Only the top element is displayed for the whole array
// int main()
// {
//     int stack[10], top=-1, MAX=10, new_element;

//     printf("\n ------------ \n");
//     cout << "Enter the number to be inserted in the stack: ";
//     cin >> new_element;
//     cout << endl;

//     cout << "PUSHING ~ INSERTION" << endl;
//     if (top == MAX-1)
//     {
//         cout << "STACK OVERFLOW";
//     }
//     else
//     {
//         top++;
//         stack[top] = new_element;
//     }
    
//     cout << "Dispalying the stack: " << endl;
//     cout << stack[top] << endl;
    
//     return 0;
// }