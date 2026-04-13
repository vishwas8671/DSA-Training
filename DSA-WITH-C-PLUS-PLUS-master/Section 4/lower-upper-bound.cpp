#include <iostream>
#include <bits/stdc++.h> // STL
using namespace std;

int lowerBound(int arr[], int n, int target) {
    int l=0, r=n-1;
    int index = n;

    while(l<=r) {
        int mid = (l+r)/2;
        if(target<=arr[mid]) {
            index = mid;
            r = mid-1; // left side search
        }
        else {
            l = mid+1; // right side search
        }
    }

    return index;
}

int upperBound(int arr[], int n, int target) {
    int l=0, r=n-1;
    int index = n;

    while(l<=r) {
        int mid = (l+r)/2;
        if(target<arr[mid]) {
            index = mid;
            r = mid-1; // left side search
        }
        else {
            l = mid+1; // right side search
        }
    }

    return index;
}

int main() {
    int arr[] = {2,5,10,20,111,200,213,400};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;
    cin>>target;

    
    return 0;
}