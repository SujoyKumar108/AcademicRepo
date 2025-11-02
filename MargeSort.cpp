#include <iostream>
using namespace std;

void merge(int *arr, int low, int mid, int high);  // Forward declaration of merge function

void merge_sort(int *arr, int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        merge_sort(arr, low, mid);        // Recursively sort the first half
        merge_sort(arr, mid + 1, high);   // Recursively sort the second half
        merge(arr, low, mid, high);       // Merge the two sorted halves
    }
}

void merge(int *arr, int low, int mid, int high) {
    int i = low, j = mid + 1, k = 0;
    int temp[high - low + 1];  // Temporary array

    // Merging two sorted halves
    while (i <= mid && j <= high) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
        }
    }

    // Copy remaining elements from the first half
    while (i <= mid) {
        temp[k++] = arr[i++];
    }

    // Copy remaining elements from the second half
    while (j <= high) {
        temp[k++] = arr[j++];
    }

    // Copy sorted elements back to original array
    for (i = low, k = 0; i <= high; i++, k++) {
        arr[i] = temp[k];
    }
}

int main() {
    int arr[5] = {5, 2, 9, 1, 3};  // Example array of size 5
    int n = 5;

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    merge_sort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}




