#include <bits/stdc++.h>
using namespace std;


bool isArmstrong(int n) {
    int original = n;
    int sum  = 0;

    while (n !=0) {
        int digit = n % 10;
        sum = sum + digit * digit * digit;
        n = n /10;
    }
    return  sum ==  original;
}


int main () {
    int n;
    cin >> n;
    cout << isArmstrong(n);
}
