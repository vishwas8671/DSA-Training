#include <bits/stdc++.h>
using namespace std;

// 1. Largest Element
int largest(int arr[], int n) {
    int mx = arr[0];
    for(int i = 1; i < n; i++)
        mx = max(mx, arr[i]);
    return mx;
}

// 2. Second Largest (no sorting)
int secondLargest(int arr[], int n) {
    int largest = -1, second = -1;
    for(int i = 0; i < n; i++) {
        if(arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if(arr[i] < largest && arr[i] > second) {
            second = arr[i];
        }
    }
    return second;
}

// 3. Check if array is sorted
bool isSorted(int arr[], int n) {
    for(int i = 0; i < n - 1; i++)
        if(arr[i] > arr[i + 1])
            return false;
    return true;
}

// 4. Remove duplicates from sorted array
int removeDuplicates(int arr[], int n) {
    int i = 0;
    for(int j = 1; j < n; j++) {
        if(arr[j] != arr[i]) {
            i++;
            arr[i] = arr[j];
        }
    }
    return i + 1;
}

// 5. Left rotate by one
void leftRotateByOne(int arr[], int n) {
    int temp = arr[0];
    for(int i = 1; i < n; i++)
        arr[i - 1] = arr[i];
    arr[n - 1] = temp;
}

// 6. Left rotate by D places
void leftRotateByD(int arr[], int n, int d) {
    d = d % n;
    reverse(arr, arr + d);
    reverse(arr + d, arr + n);
    reverse(arr, arr + n);
}

// 7. Move zeros to end
void moveZeros(int arr[], int n) {
    int j = 0;
    for(int i = 0; i < n; i++)
        if(arr[i] != 0)
            arr[j++] = arr[i];
    while(j < n)
        arr[j++] = 0;
}

// 8. Linear search
int linearSearch(int arr[], int n, int x) {
    for(int i = 0; i < n; i++)
        if(arr[i] == x)
            return i;
    return -1;
}

// 9. Union of two sorted arrays
vector<int> unionSorted(int a[], int b[], int n, int m) {
    int i = 0, j = 0;
    vector<int> res;

    while(i < n && j < m) {
        if(a[i] <= b[j]) {
            if(res.empty() || res.back() != a[i])
                res.push_back(a[i]);
            i++;
        } else {
            if(res.empty() || res.back() != b[j])
                res.push_back(b[j]);
            j++;
        }
    }

    while(i < n) {
        if(res.back() != a[i])
            res.push_back(a[i]);
        i++;
    }

    while(j < m) {
        if(res.back() != b[j])
            res.push_back(b[j]);
        j++;
    }

    return res;
}

// 10. Missing number (1 to N)
int missingNumber(int arr[], int n) {
    int total = n * (n + 1) / 2;
    int sum = 0;
    for(int i = 0; i < n - 1; i++)
        sum += arr[i];
    return total - sum;
}

int main() {
    int arr[] = {1, 2, 3, 0, 0, 5};
    int n = 6;

    cout << "Largest: " << largest(arr, n) << endl;
    cout << "Second Largest: " << secondLargest(arr, n) << endl;
    cout << "Is Sorted: " << isSorted(arr, n) << endl;

    moveZeros(arr, n);
    cout << "After moving zeros: ";
    for(int x : arr) cout << x << " ";
    cout << endl;

    return 0;
}
