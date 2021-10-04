/*
INSERTION
    1. inserting at index 0
    2. insertinf at index -1
    3. inserting at specific given index/position
    4. inserting after sorting
*/

// header file
#include<stdio.h>

// function prototype
void Array(void);
void Choice(void);
void InsertElement(void);
void Display(void);
void IndexFirst(void);
void IndexLast(void);
void Position(void);
void SortingInsertion(void);

// global declaration
int array[50], i, j, choice, temp, size, new_position, new_element;

// main function
int main()
{
    // to take the size & elememts of the array
    Array();

    printf("Displaying array: \n");
    Display();  

    // to take the new element to insert into the array
    InsertElement();

    // to ask for the insertion type
    Choice();
    
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
            Position();
            break;
        case 4:
            printf("4. Inserting after sorting \n");
            SortingInsertion();
            break;
        default:
            printf("Invalid choice! \n");
            break;
    }

    if(choice == ('1' || '2' || '3' || '4') )
    {
        printf("Insertion completed as per desired choice. \n");
        printf("Displaying the array after insertion: \n");
        Display();
    }
    else
    {
        printf("Insertion terminated due to invalid choice! \n");
    }
    

    return 0;
}

void Array(void)
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

void Choice(void)
{
    printf("Displaying the choice list: \n");
    printf("1. Inserting at index 0 \n");
    printf("2. Inserting at index -1 \n");
    printf("3. Inserting at specific given index \n");
    printf("4. Inserting after sorting");
    printf("\n ------------------ \n");

    printf("Enter your choice: ");
    scanf("%d", &choice);
    printf("\n -------------- \n");
}
void InsertElement(void)
{
    printf("Enter an element to insert: ");
    scanf("%d", &new_element);
    printf("\n -------------- \n");
}

void Display(void)
{
    for(i=0; i<size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n ------------ \n");
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
    // size++;  --> this will increase the size by 1 will always display "0" at -1 index
    array[size] = new_element;
    size++;
}

void Position(void)
{
    printf("Enter the position for insertion: ");
    scanf("%d", &new_position);
    for(i=size; i>=new_position; i--)
    {
        array[i]=array[i-1];
    }
    size++;
	array[new_position-1] = new_element;
}

void SortingInsertion(void)
{
    printf("Sorting the array before insertion. \n");
    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            // if ( array[j] > array[i])     // --> descending order
            if ( array[j] < array[i])        // --> ascending order
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    printf("Displaying the array after sorting. \n");
    Display();
    printf("Inserting the new element after sorting. \n");
    // inserting the element at last index & then sorting the whole array
    array[size] = new_element;
    size++;
    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            // if ( array[j] > array[i])     // --> descending order
            if ( array[j] < array[i])        // --> ascending order
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    // for(i=0; i<size; i++)
    // {
    //     if(new_element <= array[i])
    //     {
    //         array[i] = new_element;
    //         array[new_element] = new_position;
    //     }
    //     size++;
    // }
    Display();
}