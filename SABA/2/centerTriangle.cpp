#include <bits/stdc++.h>
using namespace std;

void centerTriangle(int n) {
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n-1; j++) {
            cout << " ";
        }
        for (int k=1; k<=(2*i)-1; k++) {
            cout << "* ";
        }
    }
    cout << endl;
}

int main() {
    int n; cin >> n;
    centerTriangle(n);
    return 0;
}
