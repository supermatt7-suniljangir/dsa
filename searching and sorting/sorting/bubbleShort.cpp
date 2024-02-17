#include <iostream>
// in bubble sort, we compare an element and its adjacent element,if the element is greater than its adjacent element, we swap them otherwise we let them fuck themselves.
void swap(int &a, int &b) {
  // Simple swap function to exchange values of two integers
  int temp = a;
  a = b;
  b = temp;
}

void bubbleSort(int arr[], int n) {
  // Core bubble sort algorithm
  bool swapped;
  for (int i = 0; i < n - 1; i++) {
    swapped = false;
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
        swapped = true;
      }
    }
    // If no swaps occurred in inner loop, array is already sorted
    if (!swapped) {
      break;
    }
  }
}

int main() {
  int arr[] = {5, 2, 8, 1, 3}; // Example array
  int n = sizeof(arr) / sizeof(arr[0]);

  bubbleSort(arr, n);

  std::cout << "Sorted array: ";
  for (int i = 0; i < n; i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}
