// program to implement the Bubble Sort and selection sort

// ------------------ header files --------------------
#include<stdio.h>

// ------------------ global declarations --------------------
int choice, temp;
int array[7] = {3,6,1,9,0,2,5};

// ------------------ function prototype --------------------
void List(void);
void Display (void);
void Bubble (void);
void Selection (void);
void Insertion (void);

// ------------------ main function --------------------
int main()
{
    printf ("Before sorting: ");
    Display();
    do 
    {
        List();
        
        switch (choice)
        {
        case 1:
            printf ("Applying bubble sort... \n");
            Bubble();
            printf ("After sorting: ");
            Display();
            break;
        case 2:
            printf ("Applying selection sort... \n");
            Selection();
            printf ("After sorting: ");
            Display();
            break;
        case 3:
            printf ("Applying insertion sort... \n");
            Insertion();
            printf ("After sorting: ");
            Display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf ("Invalid choice! \n");
            break;
        }      
    } while (choice != 4);
    return 0;
}

// ------------------ function definitions --------------------
void List(void)
{
    printf (" ------------------------------ \n");
    printf (" List of sorting methods: \n");
    printf (" 1. Bubble sort \n");
    printf (" 2. Selection sort \n");
    printf (" 3. Insertion sort \n");
    printf (" 4. Exit \n");
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
    for (int i=0; i<5; i++)
    {
        for (int j=0; j<=5-i; j++)
        {
            if (array[j] > array[j+1])
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
    for(int i=0; i<5; i++)
    {
        int position = i;
        for(int j=i+1; j<6; j++)
        {
            if(array[j]<array[position])
            {
                position = j;
            }
        }
        temp = array[position];
        array[position] = array[i];
        array[i] = temp;
    }
}

void Insertion (void)
{
    int j;
    int n = sizeof(array)/ sizeof(array[0]);
    for (int i=1; i<n; i++)
    {
        temp = array[i];
        j = i-1;
    }
    while (j>=0 && temp < array[j])
    {
        array[j+1] = array[j];
        j--;
    }
    array[j+1] = temp;
}