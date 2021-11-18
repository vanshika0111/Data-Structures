// program to create, display and reverse an array

#include<stdio.h>

int main()
{
    int array[5];
	int i;

	printf("Creating the array: \n");
	for(i=0; i<5; i++)
 	{
         printf("Element %d: ", i+1);	 
 		scanf("%d", &array[i]);
	}
    printf("\n");	

    printf("Displaying the array: \n");
    printf("[");
    for(i=0;i<5;i++)
 	{	 
 		printf(" %d ",array[i]);
	}
    printf("] \n");

	printf("Reversing the array:\n");
    printf("[");
	for(i=4;i>=0;i--)
 	{	 
 		printf(" %d ",array[i]);	
 	}
    printf("] \n");
    return 0;
}