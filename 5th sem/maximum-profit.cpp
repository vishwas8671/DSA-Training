#include <bits/stdc++.h>
using namespace std;

int main() {
    int P[1000];
    int n, i, j;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> P[i];
    }
    int max_profit = INT_MIN;
    int profit = P[j]-P[i];
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            max_profit = max(max_profit, profit);
        }
    }
    cout  << max_profit;
}

