#include <bits/stdc++.h>
using namespace std;

void leftNumTriangle(int n) {
    for (int i=1; i<=n; i++) {
        for (int j=i; j<=n; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main() {
    int n; cin >> n;
    leftNumTriangle(n);
    return 0;
}



// 1 2 3 4 5 
// 2 3 4 5 
// 3 4 5 
// 4 5 
// 5 