// program to find the mean of n numbers using array

#include<stdio.h>

int main()
{
    int a1[50], i, size;
    float avg=0;

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

    printf("Calculating the average of %d numbers \n", size);
    for(i=0; i<size; i++)
    {
        avg += a1[i];
    }
    avg /= size;
    printf("The mean of the elements is %f \n", avg);

    return 0;

}