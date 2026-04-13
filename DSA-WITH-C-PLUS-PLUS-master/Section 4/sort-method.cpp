#include <iostream>
#include <vector>
#include <bits/stdc++.h> // STL
using namespace std;

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);

    sort(arr, arr + n); // Sort in ascending order

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    vector<int> vec = {5, 2, 9, 1, 5, 6};
    sort(vec.begin(), vec.end()); // Sort in ascending order

    cout << "Sorted vector: ";
    for(int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}