// program to implement linear search and binary search.

// ------------------ header files --------------------
#include<stdio.h>

// ------------------ global declarations --------------------
int choice, element, size, i, search;
int linear[] = {1,3,8,2,6,0};
int binary[] = {1,3,6,10,44,60};

// ------------------ function prototype --------------------
void ChoiceList (void);
void LinearData (void);
void BinaryData (void);
int LinearSearch (int, int);
int BinarySearch (int, int);

// ------------------ main function --------------------
int main()
{
    do 
    {
        ChoiceList();
        switch (choice)
        {
            case 1:
                LinearData();
                break;
            case 2:
                BinaryData();
                break;
            case 3:
                exit(0);
                break;
            default:
                printf ("Invalid choice \n");
                exit(0);
                break;
        }
    } while (choice != 3);
    return 0;
}

// ------------------ function definitions --------------------
void ChoiceList (void)
{
    printf ("------------------------------------------ \n");
    printf ("List of operations performed on stack is: \n");
    printf ("1. Linear Search \n");
    printf ("2. Binary Search \n");
    printf ("3. Exit \n");
    printf ("Enter your choice: ");
    scanf ("%d", &choice);
    printf ("\n");
}

void LinearData (void)
{
    printf ("Array for linear search: [");
    for(i=0; i<6; i++)
    {
        printf (" %d ", linear[i]);
    }
    printf ("] \n");
    size = sizeof(linear)/sizeof(int);
    printf (" Enter the element to search: ");
    scanf ("%d", &element);
    printf(" \n ");
    search = LinearSearch(size, element);
    printf("The element %d was found at position %d \n", element, search);
}

int LinearSearch (int size, int element)
{
    for (int i=0; i<size; i++)
    {
        if (linear[i] == element)
        {
            return i+1;
        }
    }
    return -1;
}

void BinaryData (void)
{
    printf ("Array for binary search: [");
    for(i=0; i<6; i++)
    {
        printf (" %d ", binary[i]);
    }
    printf ("] \n");
    size = sizeof(binary)/sizeof(int);
    printf (" Enter the element to search: ");
    scanf ("%d", &element);
    printf(" \n ");
    search = BinarySearch(size, element);
    printf("The element %d was found at position %d \n", element, search+1);
}

int BinarySearch (int size, int element)
{
    int low, mid, high;
    low = 0;
    high = size-1;
    
    while (low <= high)
    {
        mid = (low+high)/2;
        if(binary[mid] == element)
        {
            return mid;
        }
        else if(binary[mid] < element)
        {
            low = mid + 1;
        }
        else 
        {
            high = mid - 1;
        }
    }
    return -1; 
}