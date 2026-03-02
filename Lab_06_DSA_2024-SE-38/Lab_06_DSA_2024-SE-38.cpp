#include <iostream>
using namespace std;
//        Binary Search Program

int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int key = 40;

    int result = binarySearch(arr, n, key);

    if (result != -1)
        cout << "Element found at index " << result;
    else
        cout << "Element not found";

    return 0;
}



//         Linear Search Program
//#include <iostream>
//using namespace std;
//
//int linearSearch(int arr[], int n, int key) {
//    for (int i = 0; i < n; i++) {
//        if (arr[i] == key)
//            return i;   // element found
//    }
//    return -1;          // element not found
//}
//
//int main() {
//    int arr[] = {12, 45, 23, 51, 19};
//    int n = 5;
//    int key = 23;
//
//    int result = linearSearch(arr, n, key);
//
//    if (result != -1)
//        cout << "Element found at index " << result;
//    else
//        cout << "Element not found";
//
//    return 0;
//}

//             Merge Sort Program

//#include <iostream>
//using namespace std;
//
//void merge(int arr[], int left, int mid, int right) {
//    int n1 = mid - left + 1;
//    int n2 = right - mid;
//
//    int L[n1], R[n2];
//
//    for (int i = 0; i < n1; i++)
//        L[i] = arr[left + i];
//    for (int j = 0; j < n2; j++)
//        R[j] = arr[mid + 1 + j];
//
//    int i = 0, j = 0, k = left;
//
//    while (i < n1 && j < n2) {
//        if (L[i] <= R[j])
//            arr[k++] = L[i++];
//        else
//            arr[k++] = R[j++];
//    }
//
//    while (i < n1)
//        arr[k++] = L[i++];
//
//    while (j < n2)
//        arr[k++] = R[j++];
//}
//
//void mergeSort(int arr[], int left, int right) {
//    if (left < right) {
//        int mid = left + (right - left) / 2;
//
//        mergeSort(arr, left, mid);
//        mergeSort(arr, mid + 1, right);
//        merge(arr, left, mid, right);
//    }
//}
//
//int main() {
//    int arr[] = {5, 3, 8, 4, 2};
//    int n = 5;
//
//    mergeSort(arr, 0, n - 1);
//
//    cout << "Sorted Array: ";
//    for (int i = 0; i < n; i++) {
//        cout << arr[i] << " ";
//    }
//
//    return 0;
//}


//             Bubble Sort Program

//#include <iostream>
//using namespace std;
//
//int main() {
//    int arr[] = {5, 3, 8, 4, 2};
//    int n = 5;
//
//    // Bubble sort algorithm
//    for (int i = 0; i < n - 1; i++)
//    {
//        // Number of passes
//        for (int j = 0; j < n - i - 1; j++)
//        {
//            // Adjacent comparisons
//            if (arr[j] > arr[j + 1]) {
//                // Swap elements
//                int temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//    }
//
//    // Display sorted array
//    cout << "Sorted Array: ";
//    for (int i = 0; i < n; i++) {
//        cout << arr[i] << " ";
//    }
//
//    return 0;
//}


