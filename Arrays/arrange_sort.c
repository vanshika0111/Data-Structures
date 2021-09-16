// program to read 10 integers in an array
// sort them out on the basis of number of digits in each element

#include<stdio.h>

int main()
{
    int a1[50], i, j, temp, size;

    printf("Enter size of array: ");
    scanf("%d", &size);
    printf("\n ------------- \n");

    printf("Enter elements of array: \n");
    for(i=0; i<size; i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", &a1[i]);
    }
    printf("\n ------------ \n");

    printf("Displaying array before sorting: \n");
    for(i=0; i<size; i++)
    {
        printf("%d ", a1[i]);
    }
    printf("\n ------------------- \n");

    printf("Sorting \n");
    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if ( a1[j] > a1[i])     // --> descending order
            // if ( a1[j] < a1[i])  // --> ascending order
            {
                temp = a1[i];
                a1[i] = a1[j];
                a1[j] = temp;
            }
        }
    }

    printf("Displaying the array after sorting: \n");
    for(i=0; i<size; i++)
    {
        printf("%d ", a1[i]);
    }
    printf("\n ------------- \n");
    return 0;
}