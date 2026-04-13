#include <iostream>
#include <bits/stdc++.h> // STL
using namespace std;

int main() {
    int arr[] = {2,5,10,20,111,200,213,400};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;
    cin>>target;

    int l=0, r=n-1;
    int index = -1;

    while(l<=r) {
        int mid = (l+r)/2;
        if(target<arr[mid]) {
            r = mid-1;
        }
        else if(target>arr[mid]) {
            l = mid+1;
        }
        else { // target == arr[mid]
            index = mid;
            break;
        }
    }

    if(index==-1) {
        cout << "Element not found" << endl;
    } else {
        cout << "Element found at index: " << index << endl;
    }

    return 0;
}