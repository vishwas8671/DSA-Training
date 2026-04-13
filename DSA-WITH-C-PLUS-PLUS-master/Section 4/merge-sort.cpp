#include <iostream>
#include <bits/stdc++.h> // STL
using namespace std;

void merge(int arr[], int l, int mid, int r) { // Time: O(n), Space: O(n)
    int n1 = mid - l + 1;
    int n2 = r - mid;

    int A[n1], B[n2];

    for(int i=0; i<n1; i++) {
        A[i] = arr[l + i];
    }

    for(int j=0; j<n2; j++) {
        B[j] = arr[mid + 1 + j];
    }

    int i=0, j=0, k=l;
    while(i<n1 && j<n2) {
        if(A[i] <= B[j]) {
            arr[k] = A[i];
            i++;
        } else {
            arr[k] = B[j];
            j++;
        }
        k++;
    }

    while(i<n1) {
        arr[k] = A[i];
        i++;
        k++;
    }

    while(j<n2) {
        arr[k] = B[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r) { // Time: O(n log n), Space: O(n)
    // base case
    if(l>=r) {
        return;
    }
    int mid = (l+r)/2;
    // left part sort
    mergeSort(arr, l, mid);
    // right part sort
    mergeSort(arr, mid+1, r);

    // merge
    merge(arr, l, mid, r);  // Time: O(n), Space: O(n)
}

int main() {
    int arr[] = {100, 82, 91, 73, 66, 55, 44, 33, 22, 11};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, arr_size - 1);

    cout << "Sorted array: \n";
    for (int i = 0; i < arr_size; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}