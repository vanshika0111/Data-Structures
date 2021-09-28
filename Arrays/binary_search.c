// binary search

/*
Binary search can be used to search for a particular element only in SORTED array.
*/

#include<stdio.h>

int BinarySearch(int arr[], int size, int element)
{
    int low, mid, high;
    low = 0;
    high = arr[size-1];
    
    while (low <= high)
    {
        mid = (low+high)/2;
        if(arr[mid] == element)
        {
            return mid;
        }
        if(arr[mid] < element)
        {
            low = mid + 1;
        }
    }
    return -1;  // only if the element is not present in the array
}
    

int main()
{
    int arr[] = {1,3,6,10,44};
    int size = sizeof(arr)/sizeof(int);
    int element = 3;
    int search = BinarySearch(arr, size, element);
    printf("The element %d was found at index %d", element, search);
    return 0;
}