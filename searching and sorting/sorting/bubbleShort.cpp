// #include <iostream>
// // in bubble sort, we compare an element and its adjacent element,if the element is greater than its adjacent element, we swap them otherwise we let them fuck themselves.
// void swap(int &a, int &b) {
//   // Simple swap function to exchange values of two integers
//   int temp = a;
//   a = b;
//   b = temp;
// }

// void bubbleSort(int arr[], int n) {
//   // Core bubble sort algorithm
//   bool swapped;
//   for (int i = 0; i < n - 1; i++) {
//     swapped = false;
//     for (int j = 0; j < n - i - 1; j++) {
//       if (arr[j] > arr[j + 1]) {
//         swap(arr[j], arr[j + 1]);
//         swapped = true;
//       }
//     }
//     // If no swaps occurred in inner loop, array is already sorted
//     if (!swapped) {
//       break;
//     }
//   }
// }

// int main() {
//   int arr[] = {5, 2, 8, 1, 3}; // Example array
//   int n = sizeof(arr) / sizeof(arr[0]);

//   bubbleSort(arr, n);

//   std::cout << "Sorted array: ";
//   for (int i = 0; i < n; i++) {
//     std::cout << arr[i] << " ";
//   }
//   std::cout << std::endl;

//   return 0;
// }

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
};

void bubbleSort(int arr[], int n)
{
    bool sorted;
    for (int i = 0; i < n - 1; i++) // n-1 because we will perfrom an operation where we will check whether the adjacent element of each element, in this case <n-1 means if the array length is 5, at index 4,  we can't go and we won't go because we will access it in our inner loop using i and i+1
    {
        sorted = false;
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                  sorted = true;
            }
        }
        if (!sorted){break;}
            
    }
};

int main()
{
int arr[] = {1, 4, 3, 9, 2};
bubbleSort(arr, 5);

cout << "the new sorted array is: " << endl;
for (int i = 0; i < 5; i++)
{
cout << arr[i] << " " ;
}


    return 0;
}