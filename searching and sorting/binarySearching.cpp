#include <iostream>

using namespace std;

int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;
    
    while (left <= right) {
        int mid = (left + right) / 2;
        
        // Check if target is present at mid
        if (arr[mid] == target)
            return mid;
        
        // If target is greater, ignore left half
        if (arr[mid] < target)
            left = mid + 1;
        
        // If target is smaller, ignore right half
        else
            right = mid - 1;
    }
    
    // If we reach here, then the element was not present
    return -1;
}

int main() {
    int arr[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 13;
    int index = binarySearch(arr, size, target);
    
    if (index != -1)
        cout << "Element found at index " << index << endl;
    else
        cout << "Element not found" << endl;
    
    
    return 0;

    // //  directory="/mnt/c/Users/walke/codefolder-main/data\ structures"
    // find "$directory" -type f -name "*.exe" -delete
}
// find /mnt/c/Users/walke/codefolder-main/data\ structures -type f -name "*.exe" -exec rm {} +

