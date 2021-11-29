// program to implement the Bubble Sort and selection sort

// ------------------ header files --------------------
#include<stdio.h>

// ------------------ global declarations --------------------
int choice;
int array[7] = {3,6,1,9,0,2,5};

// ------------------ function prototype --------------------
void List(void);
void Display (void);
void Bubble (void);
void Selection (void);

// ------------------ main function --------------------
int main()
{
    do 
    {
        List();
        printf ("Before sorting: ");
        Display();
        printf ("Sorting the array ... \n");
        switch (choice)
        {
        case 1:
            Bubble();
            printf ("After sorting: ");
            Display();
            break;
        case 2:
            Selection();
            printf ("After sorting: ");
            Display();
            break;
        case 3:
            exit(0);
            break;
        default:
            printf ("Invalid choice! \n");
            break;
        }      
    } while (choice != 3);
    return 0;
}

// ------------------ function definitions --------------------
void List(void)
{
    printf (" ------------------------------ \n");
    printf (" List of sorting methods: \n");
    printf (" 1. Bubbke sort \n");
    printf (" 2. Selection sort \n");
    printf (" 3. Exit \n");
    printf (" Enter your choice: ");
    scanf ("%d", &choice);
    printf (" \n ");
}

void Display (void)
{
    printf (" [");
    for (int i=0; i<7; i++)
    {
        printf (" %d ", array[i]);
    }
    printf ("] \n");
}

void Bubble (void)
{
    int temp;
    for (int i=0; i<6; i++)
    {
        for (int j=i+1; j<=7; j++)
        {
            if (array[j] > array[i])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

void Selection (void)
{

}