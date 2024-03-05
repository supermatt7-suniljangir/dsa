// #include <iostream>
// using namespace std;
// // Function to perform insertion sort
// void insertionSort(int arr[], int n) {
//     // Loop through each element of the array
//     for (int i = 1; i < n; i++) {
//         // Store the current element in a variable
//         int key = arr[i];
//         // Initialize a variable to traverse the sorted part of the array
//         int j = i - 1;
        
//         // Move elements of arr[0..i-1], that are greater than key,
//         // to one position ahead of their current position
//         while (j >= 0 && arr[j] > key) {
//             arr[j + 1] = arr[j]; // Shift elements to the right
//             j = j - 1;
//         }
        
//         // Insert the key into its correct position
//         arr[j + 1] = key;
//     }
// }

// int main() {
//     int arr[] = {12, 11, 13, 5, 6};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     insertionSort(arr, n);

//   cout << "Sorted array " << endl;



//   for (int i = 0; i < n; i++)
//   {
//    cout << arr[i] << " " ;
//   }
  
//   return 0;
// }


void insertionSort(int arr[], int size){

// we are good to go now
// loop for passes
for (int i = 1; i < size; i++)
{
    // loop for each pass
    int key = arr[i];
int j = i-1; //just 1 before i for each iteration.
while(j >= 0 && arr[j] > key){
  arr[j+1] = arr[j];
   j--;
}
// we have decremented the j to the position where all the elements are greater than the current key through the while loop, we can finnaly set our i to that position 
arr[j+1] = key;//we set it to j+1 no j becuase we are decrementing j with -1 once we have a our condition satisfied, which means that we are asking the condtion for j in each iteration but applying it to j+1 and hence j would be one less than the correct position in the final iteration
}
}


#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    
int arr[] = {12, 3, 54, 43, 5345, 46, 5};
int size = sizeof(arr) / sizeof(arr[0]);


insertionSort(arr, size);
cout << size << endl;
    return 0;
}