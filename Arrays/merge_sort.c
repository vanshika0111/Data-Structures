// program to merge two sorted arrays & sort the merged array

#include<stdio.h>

int main()
{
    int a1[3] = {5,6,7}, a2[3] = {1,2,3}, a3[6], i, position = 0, j, temp;

    printf("First array: [");
    for(i=0; i<3; i++)
    {
        printf(" %d ", a1[i]);
    }
    printf("] \n");

    printf("Second array: [");
    for(i=0; i<3; i++)
    {
        printf(" %d ", a2[i]);
    }
    printf("] \n");

    printf("Merging both arrays... \n");
    for( i=0; i<3; i++)
    {
        a3[position] = a1[i];
        position++;
    }
    for(i=0; i<3; i++)
    {
        a3[position] = a2[i];
        position++;
    }

    printf("Merged array: [");
    for(i=0; i<6; i++)
    {
        printf(" %d ", a3[i]);
    }
    printf("] \n");

    printf("Sorting the merged array... \n");
    for( i=0; i<6; i++)
    {
        for( j=i+1; j<6; j++)
        {
            if( a3[j] < a3[i])
            {
                temp = a3[j];
                a3[j] = a3[i];
                a3[i] = temp;
            }
        }
    }

    printf("Sorted merged array: [");
    for(i=0; i<6; i++)
    {
        printf(" %d ", a3[i]);
    }
    printf("] \n");
    
    return 0;
}