#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == target) {
            return mid; // element found
        }
        else if (arr[mid] < target) {
            left = mid + 1; // search right half
        }
        else {
            right = mid - 1; // search left half
        }
    }

    return -1; // not found
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = 6;
    int target = 40;

    int result = binarySearch(arr, size, target);

    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}sssssssssss