// Write a program to search given element from an array using sequential search and binary search. 
// Analyze the time complexity for best, average, and worst case. 

// ------------------ header files --------------------
#include<iostream>
using namespace std;

// ------------------ global declarations --------------------
int i, element, size, search;
int linear[] = {1,3,8,2,6,0};
int binary[] = {1,3,6,10,44,60};


// ------------------ function definitions --------------------
LinearSearch(int size, int element) {
	for (int i=0; i<size; i++)
    {
        if (linear[i] == element)
        {
            return i+1;
        }
    }
    return -1;
}

void LinearData(void) {
	cout << "Array for linear search: [ ";
	for(i=0; i<6; i++) {
		cout << linear[i] << " " ;
	} 
	cout << "]" << endl;
	size = sizeof(linear)/sizeof(int);
	cout << "Enter element to search: ";
	cin >> element;
	search = LinearSearch(size, element);
	cout << endl << "The element " << element << " is found at " << search << endl;
}

BinarySearch(int size, int element) {
	int low, mid, high;
    low = 0;
    high = size-1;
    
    while (low <= high)
    {
        mid = (low+high)/2;
        if(binary[mid] == element)
        {
            return mid;
        }
        else if(binary[mid] < element)
        {
            low = mid + 1;
        }
        else 
        {
            high = mid - 1;
        }
    }
    return -1; 
}

void BinaryData (void) {
	cout << "Array for binary search: [ ";
	for(i=0; i<6; i++) {
		cout << binary[i] << " " ;
	} 
	cout << "]" << endl;
	size = sizeof(binary)/sizeof(int);
	cout << "Enter element to search: ";
	cin >> element;
	search = BinarySearch(size, element);
	cout << endl << "The element " << element << " is found at " << search+1 << endl;
}

// ------------------ main function --------------------
int main() {
	LinearData();
	BinaryData();
	return 0;
}
