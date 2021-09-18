// program to find the second largest number from an array

#include<stdio.h>

int main()
{
    int a1[50], i, size;
    int largest, second_large;

    printf("Enter the size of array: ");
    scanf("%d", &size);
    printf("\n ---------------- \n");

    printf("Enter the elements of the array: \n");
    for(i=0; i<size; i++)
    {
        printf("Enter elemnet %d: ", i+1);
        scanf("%d", &a1[i]);
    }
    printf("\n --------------- \n");

    printf("Displaying the array: \n");
    for(i=0; i<size; i++)
    {
        printf("%d ", a1[i]);
    }
    printf("\n ------------ \n");

    printf("Searching for the largest element. \n");
    largest = a1[0];
    for(i=0; i<size; i++)
    {
        if (a1[i] > largest)
        {
            largest = a1[i];
        }
    }
    printf("Largest element found! \n");
    printf("\n ------------ \n");

    printf("Searching for the second largest element. \n");
    second_large = a1[1];
    for(i=0; i<size; i++)
    {
        if(a1[i] != largest)
        {
            if(a1[i] > second_large)
            {
                second_large = a1[i];
            }
        }
    }
    printf("Second largest element found! \n");
    printf("\n ------------ \n");

    printf("The largest element is %d \n", largest);
    printf("The second largest element is %d \n", second_large);
    printf("\n ------------ \n");

    return 0;
}