/*
Name:- Garje Satkar Devidas
Class:- TY-BTech-Computer , Div:- A
Roll No. :- 21
Assignment No. 1
*/

#include <iostream>
using namespace std;

void binarySearch(int low, int high, int arr[], int val) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == val) {
            cout << "Number is Present" << endl;
            return;
        } else if (arr[mid] < val) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    cout << "Number is Not Present" << endl;
}

void bubbleSort(int arr[], int n, int key) {
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
    binarySearch(0, n - 1, arr, key);
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the number to search: ";
    cin >> key;

    bubbleSort(arr, n, key);
    return 0;
}
//Output:
// Enter the number of elements: 10
// Enter the elements: 1
// 12
// 33

// 2
// 54
// 86
// 45
// 9  
// 17
// 88
// Enter the number to search: 33
// Number is Present