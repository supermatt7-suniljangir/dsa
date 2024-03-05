// #include <iostream>
// using namespace std;
// // the quick sort is considered the most optimal and fastest sorting techinique for sorting, in this shit we select a pivot(a starting point which can be any element) from an array and then we arange the whole array in a position that all the elements in the left of the pivot have smaller values than it while all the elements on the right have values greater than that of the pivot's
// void swap(int& a, int& b) {
//     int temp = a;
//     a = b;
//     b = temp;
// }

// int partition(int arr[], int low, int high) {
//     int pivot = arr[high];
//     int i = low - 1;

//     for (int j = low + 1; j < high; j++) {
//         if (arr[j] < pivot) {
//             ++i;
//             swap(arr[i], arr[j]);
//         }
//     }

//     // this will help us finally determine the right position for new pivot, which is right after all the values which could have been defined left were done and the right next will be the correct position for our pivot
//     swap(arr[i + 1], arr[high]);
//     return i + 1;
// }

// void quickSort(int arr[], int low, int high) {
//     if (low < high) {
//         int pivot = partition(arr, low, high); //this will give us the position of properly aligned piviot(high)
//         quickSort(arr, low, pivot - 1);//give a partition again with index 0 to right before the pivot occured, means now work on left ubsorted array
//         quickSort(arr, pivot + 1, high); //this here means work on right unsorted array
//     }
// }

// int main() {
//     int arr[] = {10, 7, 8, 9, 1, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     quickSort(arr, 0, n - 1);
//     cout << "Sorted array: \n";
//     for (int i = 0; i < n; ++i) {
//         cout << arr[i] << " ";
//     }
//     cout << std::endl;
//     return 0;
// }


#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void swap(int &a, int &b){
  int temp;
  temp = a;
  a = b;
  b = temp;   
}


int partition(int arr[], int low, int high){
int i = low - 1;
int pivot = arr[high];
for (int j = low+1; j <high; j++)
{
  if(arr[j] < pivot){
    ++i;
    swap(arr[j], arr[i]);
  }
}
// at the end, we need to find the new position for this shit
 swap(arr[i + 1], arr[high]);
    return i + 1;
}


void quickSort(int arr[], int low, int high){
    if(low < high){
    int partitionIndex = partition(arr, low, high);
    quickSort(arr, low, partitionIndex - 1);//left subarray
    quickSort(arr, partitionIndex+1 , high);//right subarray
    }
}


int main(){
      int arr[] = {10, 7, 8, 9, 1, 5};

    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, 5);

    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}