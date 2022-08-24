#include <iostream>
using namespace std;

void merge(int array[], int left, int middle, int right){
  int fh = middle - left + 1;
  int sh = right - middle;
  int t1[fh], t2[sh];
  for (int m = 0; m < fh; m++)
    t1[m] = array[left + m];
  for (int n = 0; n < sh; n++)
    t2[n] = array[middle + 1 + n];
  int a = 0;
  int b = 0;
  int c = left;
  while (a < fh && b < sh) {
    if (t1[a] <= t2[b]) {
      array[c] = t1[a];
      a++;
    }
    else {
      array[c] = t2[b];
      b++;
    }
    c++;
  }
  while (a < fh) {
    array[c] = t1[a];
    a++;
    c++;
  }
  while (b < sh) {
    array[c] = t2[b];
    b++;
    c++;
  } 
}

void mergeSort(int array[],int left,int right) {
  if(left>=right) {
    return;
  }
  int middle =left+ (right-left)/2;
  mergeSort(array,left,middle);
  mergeSort(array,middle+1,right);
  merge(array,left,middle,right);}

void printArray(int Array[], int size) {
  for (int d = 0; d < size; d++)
    cout << Array[d] << " ";
}

int main() {
  int n,i;
  cout<<"Enter size of array:";
  cin>>n;
  int a[n];
  cout<<"Enter "<<n<<" no.:";
  for(i=0;i<n;i++)
    cin>>a[i];
  mergeSort(a, 0, n- 1);
  cout << "After applying merge sort:";
  printArray(a, n);
  return 0;
}
