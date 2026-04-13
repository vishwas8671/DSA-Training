#include <bits/stdc++.h>
using namespace std;

int main() {
    string num;
    cin >> num; 
    char maxChar = ' ';
    int n = num.length();
    for (int i = 2; i < n; i++) {
        if (num[i] == num[i - 1] && num[i] == num[i - 2]) {
            maxChar = max(maxChar, num[i]);
        }
    }
    if (maxChar == ' ') {
        cout << "" << endl;  
    } else {
        cout << string(3, maxChar) << endl;  
    }
    return 0;
}
