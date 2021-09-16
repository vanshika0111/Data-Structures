// program to remove the duplicate elements from an array

#include<stdio.h>

int main()
{
    int a1[50], i, j, k, size;

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

    printf("Searching for duplicate elements: \n");
    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(a1[i] == a1[j])
            {
                printf("Duplicate element found! \n");
                for(k=j; k<size; k++)
                {
                    a1[k] = a1[k+1];
                }
                size--;
            }
        }
    }
    printf("\n ------------------- \n");

    printf("Displaying the array after deleting duplicate elements: \n");
    for(i=0; i<size; i++)
    {
        printf("%d ", a1[i]);
    }
    printf("\n ----------- \n");

    return 0;
}