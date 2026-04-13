#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;                 // total numbers from 1 to n

    vector<int> arr(n - 1);
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];        // input n-1 numbers
    }

    int xorAll = 0;

    // XOR of 1..n
    for (int i = 1; i <= n; i++) {
        xorAll ^= i;
    }

    // XOR of array elements
    for (int x : arr) {
        xorAll ^= x;
    }

    cout << xorAll << endl;   // missing number
    return 0;
}

