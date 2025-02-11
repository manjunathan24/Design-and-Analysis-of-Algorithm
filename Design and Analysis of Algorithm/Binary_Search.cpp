#include <iostream>
using namespace std;

int binary_search(int ar[], int low, int high, int x) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (ar[mid] == x) {
            return mid;
        }
        if (ar[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;
    int result = binary_search(arr, 0, n - 1, x);
    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found in array" << endl;
    }
    return 0;
}