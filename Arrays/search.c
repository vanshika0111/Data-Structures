// program to search a particular element from the list and print its position in the array

#include<stdio.h>
int main()
{
    int array[5], i, element;

    printf("Enter the element of the array: \n");
    for(i=0; i<5; i++)
    {
        printf("Element %d: ", i+1);
        scanf("%d", &array[i]);
    }

    printf("Array: [");
    for(i=0; i<5; i++)
    {
        printf(" %d ", array[i]);
    }
    printf("] \n");

    printf("Enter an element to search: ");
    scanf("%d", &element);
    printf("\n");

    for(i=0; i<5; i++)
    {
        if ( array[i] == element)
        {
            printf(" Element %d is found at index %d \n", element, i+1);
        }    
    }
    
    return 0;
}