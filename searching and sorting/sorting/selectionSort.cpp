// #include <iostream>
// using namespace std;
// void selectionSort(int arr[], int n) {
//     for (int i = 0; i < n - 1; ++i) {
//         int minIndex = i;
//         for (int j = i + 1; j < n; ++j) {
//             if (arr[j] < arr[minIndex]) {
//                 minIndex = j;
//             }
//         }
//         // swap arr[i] and Arr[minIndex]
//         if (minIndex != i) {
//             int temp = arr[i];
//             arr[i] = arr[minIndex];
//             arr[minIndex] = temp;
//         }
//     }
// }

// int main() {
//     int arr[] = {3, 5, 2, 13, 12};

// // / Input Array (There will be total n-1 passes. 5-1 = 4 in this case!)
//     //  00  01  02  03  04
//     // |03, 05, 02, 13, 12

//     // After first pass
//     //  00  01  02  03  04
//     //  02,|05, 03, 13, 12

//     // After second pass
//     // 00  01  02  03  04
//     // 02, 03,|05, 13, 12

//     // After third pass
//     // 00  01  02  03  04
//     // 02, 03, 05,|13, 12

//     // After fourth pass
//     // 00  01  02  03  04
//     // 02, 03, 05, 12,|13

//     int n = sizeof(arr) / sizeof(arr[0]);
//     selectionSort(arr, n);
//     cout << "Sorted array: " << endl;
//     for (int i = 0; i < n; ++i) {
//         cout << arr[i] << " ";
//     }
//     cout << std::endl;
//     return 0;
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

void selctionSort(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
          if(arr[j] < arr[minIndex]){
            minIndex = j;
          }

          
        }

        if(i != minIndex){
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

// / Input Array (There will be total n-1 passes. 5-1 = 4 in this case!)
//  00  01  02  03  04
// |03, 05, 02, 13, 12

// After first pass
//  00  01  02  03  04
//  02,|05, 03, 13, 12

// After second pass
// 00  01  02  03  04
// 02, 03,|05, 13, 12

// After third pass
// 00  01  02  03  04
// 02, 03, 05,|13, 12

// After fourth pass
// 00  01  02  03  04
// 02, 03, 05, 12,|13

int main()
{
int arr[] = {1, 4, 3, 0, 9};

selctionSort(arr, 5);
cout << "the new sorted array is: ";
for (int i = 0; i < 5; i++)
{
    cout << arr[i] << " " ;
}

    return 0;
}