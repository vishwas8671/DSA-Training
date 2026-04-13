#include <bits/stdc++.h>
using namespace std;


bool isPalindrome(int n) {
    int original = n;
    int rev = 0;
    while (n !=0) {
        int last = n % 10;
        rev = rev*10 + last;
        n = n /10;
    }
    return original == rev;

    // if (original == rev) {
    //     cout << "Palindrome";
    // } else {
    //     cout << "Not Palindrome";
    // }
}

int main() {
    int n;
    cin >> n;
    cout << isPalindrome(n);
}
