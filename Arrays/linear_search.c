// linear search

/*
Linear search can be used to to search for a particular element whether the array is sorted or not.
*/

#include<stdio.h>

int LinearSearch(int arr[], int size, int element)
{
    for (int i=0; i<size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1,3,8,2,6};
    int size = sizeof(arr)/sizeof(int);
    int element = 2;
    int search = LinearSearch(arr, size, element);
    printf("The element %d was found at index %d", element, search);
    return 0;
}