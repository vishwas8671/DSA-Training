#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[1000], result[1000];
    for (int i=0; i<n; i++) {
        cin >> arr[i];
        result[i]=0;
    }
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            if (arr[j] >arr[i]) {
                result[i]=arr[j];
            }
            break;
        }
    }
    for (int i=0; i<n; i++) {
        cout << result[i] << " ";
    }
}
