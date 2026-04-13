#include <iostream>
#include <climits>
using namespace std;

int secondLargest(int arr[], int n) {

    if (n < 2)
        return -1;

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {

        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > secondLargest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN)
        return -1;

    return secondLargest;
}

int main() {
    int arr[] = {10, 5, 20, 8, 20};
    int n = 5;

    cout << secondLargest(arr, n);
    return 0;
}



