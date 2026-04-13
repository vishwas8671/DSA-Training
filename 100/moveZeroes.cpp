#include <iostream>
using namespace std;

void moveZeroes(int arr[], int n) {

    int pos = 0;

    // Step 1: move non-zero elements forward
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[pos] = arr[i];
            pos++;
        }
    }

    // Step 2: fill remaining positions with zero
    while (pos < n) {
        arr[pos] = 0;
        pos++;
    }
}



int main() {
    int arr[] = {0, 1, 0, 3, 12};
    int n = 5;

    moveZeroes(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
