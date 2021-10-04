/*
INSERTION
    1. inserting at index 0
    2. insertinf at index -1
    3. inserting at specific given index
    4. inserting after sorting
*/

// header file
#include<stdio.h>

// function prototype
void IndexFirst(void);
void IndexLast(void);
void Position(void);
void SortingInsertion(void);

// global declaration
int array[50], i, size, new_position, new_element;

// main function
int main()
{
    int choice;

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

    printf("Displaying array: \n");
    for(i=0; i<size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n ------------------- \n");

    printf("Displaying the choice list: \n");
    printf("1. Inserting at index 0 \n");
    printf("2. Inserting at index -1 \n");
    printf("3. Inserting at specific given index \n");
    printf("4. Inserting after sorting");
    printf("\n ------------------ \n");

    printf("Enter your choice: ");
    scanf("%d", &choice);
    printf("\n -------------- \n");

    printf("Enter an element to insert: ");
    scanf("%d", &new_element);
    printf("\n -------------- \n");

    printf("Insertion process initiated... \n");
    switch (choice)
    {
        case 1:
            printf("1. Inserting at index 0 \n");
            IndexFirst();
            break;
        case 2:
            printf("2. Inserting at index -1 \n");
            IndexLast();
            break;
        case 3:
            printf("3. Inserting at specific given index \n");
            // Position();
            break;
        case 4:
            printf("4. Inserting after sorting \n");
            // SortingInsertion();
            break;
        default:
            printf("Invalid choice! \n");
            break;
    }
    printf("Insertion completed as per desired choice. \n");

    printf("Displaying the array after insertion: \n");
    for(i=0; i<size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n ------------ \n");
    return 0;
}

void IndexFirst(void)
{
    for(i=size; i>=new_position; i--)
    {
        array[i]=array[i-1];
    }
    size++;
	array[0] = new_element;
}

void IndexLast(void)
{
	// array[new_position-1] = new_element;
    // array[-1] = new_element;
    array[size] = new_element;
    size++;
}

// void Position(void)
// {

// }

// void SortingInsertion(void)
// {

// }