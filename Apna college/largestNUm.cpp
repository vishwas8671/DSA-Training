#include <iostream>
// #define INT_MAX 0;
#include <climits>
using namespace std;

int main () {
    int i, n;
    int nums[n];
    int largest = INT_MIN;
    cout << "Enter the size of the array : " << endl;
    cin >> n;
    cout << "Enter the values of the array : " << endl;
    for (i=0; i<n; i++) {
        cin >> nums[i];
    }
    for (i=0; i<n; i++) {
        if (nums[i] > largest) {
            largest = nums[i];
        }
    }
    cout << "Largest value is : " << endl;
    return 0;
}

