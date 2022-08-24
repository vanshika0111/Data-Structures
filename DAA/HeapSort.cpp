// Write a program to implement heap sort

// ------------------ header files -----------------
#include<iostream>
using namespace std;

// ------------------ global declarations -----------------
int a[30], size, temp;

// ------------------ functions -----------------
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

void Heapify (int n, int i) {
	int largest = i;
	int left = 2*i+1;
	int right =2*i+2;
	if(left < n && a[left] > a[largest]){
		largest = left;
	}
	if ( right < n && a[right] > a[largest]) {
		largest = right;
	}
	if (largest != i) {
		swap(a[i], a[largest]);
//		temp = a[i];
//		a[i] = a[largest];
//		a[largest] = temp;
		Heapify(n, largest);
	}
}

void HeapSort(int n) {
	
	for (int i=n/2-1; i>=0; i--) {
		Heapify(n,i);
	}
	for (int i=n-1; i>=0; i--) {
		swap(a[0], a[i]);
//		temp = a[0];
//		a[0] = a[i];
//		a[i] = temp;
		Heapify(i,0);
	}

}

// ------------------ main function -----------------
int main() {
	array();
	cout << "Before sorting...";
	display();
//	int n = sizeof(a) / sizeof(a[0]);
	HeapSort(size);
	cout << "After sorting...";
	display();
	return 0;
}


