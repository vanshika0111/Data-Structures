// program to insert or delete in linear array at specific position

#include<stdio.h>

int main()
{
    int a1[50], i, insert_position, new_element, delete_position, size;

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

    printf("insertion starts here.. \n");
	printf("Enter element to be inserted: ");
	scanf("%d",&new_element);
	printf("\n Enter the position for insertion: ");
	scanf("%d",&insert_position);
    printf("\n ------------ \n");

    printf("Inserting the new element: \n");
    for(i=size; i>=insert_position; i--)
    {
        a1[i]=a1[i-1];
    }
    size++;
	a1[insert_position-1] = new_element;

    printf("Displaying the array after inserting: \n");
    for(i=0; i<size; i++)
    {
        printf("%d ", a1[i]);
    }
    printf("\n ------------ \n");

    printf("Deletion starts here... \n");
    printf("Enter the position of deletion: ");
	scanf("%d",&delete_position);
	i=0;
	while(i != delete_position-1)
	{
        i++;
 	}
	while(i<size)
	{
        a1[i]=a1[i+1];
        i++;
	}
	size--;

    printf("Displaying the array after deleting: \n");
    for(i=0; i<size; i++)
    {
        printf("%d ", a1[i]);
    }
    printf("\n ------------ \n");
    
    return 0;
}