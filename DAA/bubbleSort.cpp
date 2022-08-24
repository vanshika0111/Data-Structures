// Write a program to sort given elements of an array in ascending order using bubble sort. 
// Analyse the time complexity for best, average, and worst case.

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

void BubbleSort(void) {
    int temp;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - 1; j++) {
            if (a[j] >= a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

// --------------- Main Function ------------------------
int main() {
    array();
    cout << "Before sorting...";
    display();
    BubbleSort();
    cout << "After sorting...";
    display();
    return 0;
}
