// program to to merge two unsorted arrays

#include<stdio.h>

int main()
{
    int a1[50], a2[50], a3[50];
    int size1, size2, size3;
    int i, position=0;

    printf("Enter the size of first array: ");
    scanf("%d", &size1);
    printf("\n ---------------- \n");

    printf("Enter the elements of first array: \n");
    for(i=0; i<size1; i++)
    {
        printf("Enter elemnet %d: ", i+1);
        scanf("%d", &a1[i]);
    }
    printf("\n --------------- \n");

    printf("Enter the size of second array: ");
    scanf("%d", &size2);
    printf("\n ---------------- \n");

    printf("Enter the elements of second array: \n");
    for(i=0; i<size2; i++)
    {
        printf("Enter elemnet %d: ", i+1);
        scanf("%d", &a2[i]);
    }
    printf("\n --------------- \n");

    printf("Merging the two arrays. \n");
    size3 = size1 + size2;
    for(i=0; i<size1; i++)
    {
        a3[position] = a1[i];
        position++;
    }
    for(i=0; i<size2; i++)
    {
        a3[position] = a2[i];
        position++;
    }

    printf("Displaying the first array: \n");
    for(i=0; i<size1; i++)
    {
        printf("%d ", a1[i]);
    }
    printf("\n ------------ \n");

    printf("Displaying the second array: \n");
    for(i=0; i<size2; i++)
    {
        printf("%d ", a1[i]);
    }
    printf("\n ------------ \n");

    printf("Displaying the merged array: \n");
    for(i=0; i<size3; i++)
    {
        printf(" element %d: %d \n", i+1, a3[i]);
    }
    printf("\n ------------ \n");

    return 0;

}

