// Write a program to sort given elements of an array in ascending order using selection sort. 
// Analyze the time complexity for best, average and worst case.

// --------------- Header Files ------------------------
#include <iostream>
using namespace std;

// --------------- Global Declarations ------------------------
int a[30], size;

// --------------- Functions ------------------------
void array(void) {
    cout << "Enter size of array: ";
    cin >> size;
    cout << "Enter elements of array: " << endl;
    for (int i = 0; i < size; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> a[i];
    }
    cout << endl;
}

void display(void) {
    cout << "[ ";
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
    cout << "]" << endl;
}

void SelectionSort (void) {
	int temp;
    for(int i=0; i < size - 1; i++) {
        int position = i;
        for(int j=i+1; j < size; j++) {
            if(a[j] < a[position]) {
                position = j;
            }
        }
        temp = a[position];
        a[position] = a[i];
        a[i] = temp;
    }
}

// --------------- Main Function ------------------------
int main() {
    array();
    cout << "Before sorting...";
    display();
    SelectionSort();
    cout << "After sorting...";
    display();
    return 0;
}
