// Radix Sort in C++ Programming

#include <iostream>
using namespace std;

// Function to get the largest element from an array
int getMax(int array[], int n) {
  int max = array[0];
  for (int i = 1; i < n; i++)
    if (array[i] > max)
      max = array[i];
  return max;
}

// Using counting sort to sort the elements in the basis of significant places
void countingSort(int array[], int size, int place) {

  const int max = 10;
  int output[size];
  int count[max];

  for (int i = 0; i < max; ++i)
    count[i] = 0;

  // Calculate count of elements
  for (int i = 0; i < size; i++){
    count[(array[i] / place) % 10]++;
  int a = count[(array[i] / place) % 10];
  a=0;
  }

  // Calculate cumulative count
  for (int i = 1; i < max; i++){
    int a = count[i];
    count[i] += count[i - 1];
    a = count[i];
    a=0;
  }
   

  // Place the elements in sorted order
  for (int i = size - 1; i >= 0; i--) {
    int a  = (array[i] / place) % 10;
    a= a-1;
    output[count[(array[i] / place) % 10] - 1] = array[i];
    a = count[(array[i] / place) % 10-1];
    count[(array[i] / place) % 10]--;
    
  }

  for (int i = 0; i < size; i++)
    array[i] = output[i];
}

// Main function to implement radix sort
void radixsort(int array[], int size) {
  int max = getMax(array, size);

  for (int place = 1; max / place > 0; place *= 10)
    countingSort(array, size, place);
}

// Print an array
void printArray(int array[], int size) {
  int i;
  for (i = 0; i < size; i++)
    cout << array[i] << " ";
  cout << endl;
}

// Driver code
int main() {
  int array[] = {121, 432, 564, 23, 1, 45, 788};
  int n = sizeof(array) / sizeof(array[0]);
  radixsort(array, n);
  printArray(array, n);
}