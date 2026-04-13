#include <iostream>
#include <bits/stdc++.h> // STL
using namespace std;

int main() {
    int arr[] = {5,8,1,3,7,9};
    int target;
    cin >> target;

    int index = -1; // Default value if target not found
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<n; i++) {
        if(arr[i] == target) {
            index = i; // Target found at index i
            break; // Exit loop once target is found
        }
    }

    if(index==-1) {
        cout << "Element not found" << endl;
    } else {
        cout << "Element found at index: " << index << endl;
    }

    return 0;
}