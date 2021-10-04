/*
Deletion
    1. Deleting the first element
    2. Deleting the last element
    3. Deleting the element from particular index 
*/

// header file
#include<stdio.h>

// function prototype
void Array(void);
void Choice(void);
void Display(void);

// global declaration
int array[50], i, j, choice, size, delete_position;

// main function
int main()
{
    // to take the size & elememts of the array
    Array();

    printf("Displaying array: \n");
    Display(); 

    // to ask for the insertion type
    Choice();

    return 0;
}

void Array (void)
{
    printf("Enter the size of array: ");
    scanf("%d", &size);
    printf("\n ------------- \n");

    printf("Enter elements of array: \n");
    for(i=0; i<size; i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", &array[i]);
    }
    printf("\n ------------ \n");
}

void Choice (void)
{
    printf("Displaying the choice list: \n");
    printf("1. To delete the first element \n");
    printf("2. To delete the last element \n");
    printf("3. To delete the element from particular index \n");
    printf("\n ------------------ \n");

    printf("Enter your choice: ");
    scanf("%d", &choice);
    printf("\n -------------- \n");
}

void Display (void)
{
    for(i=0; i<size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n ------------ \n");
}