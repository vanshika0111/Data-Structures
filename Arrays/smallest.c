// program to print the position of the smallest number of n numbers using arrays

#include<stdio.h>

int main()
{
    int array[50], size, i, smallest, actual_position;

    printf("Enter size of array: ");
    scanf("%d", &size);
    printf("\n ------------- \n");

    printf("Enter elements of array: \n");
    for(i=0; i<size; i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", &array[i]);
    }
    printf("\n ------------ \n");

    printf("Displaying array before sorting: \n");
    for(i=0; i<size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n ------------------- \n");

    printf("Searching for the smallest element: \n");
    smallest = array[0];
    actual_position = 0;
    for(i=0; i<size; i++)
    {
        if (array[i] < smallest)
        {
            smallest = array[i];
            actual_position = i;
        }
    }
    printf("The smallest element is %d \n", smallest);
    printf("The position of the smallest element is %d \n", actual_position+1);

    return 0;
}