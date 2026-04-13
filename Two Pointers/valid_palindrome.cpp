#include <bits/stdc++.h>
using namespace std;
int main() {
    string s; 
    getline(cin, s);
    int i=0;
    int j=s.size()-1;
    bool isPalindrome = true;
    while (i < j) {
        while(i<j && !isalnum(s[i])) i++;
        while(i<j && !isalnum(s[j])) j++;
        if (tolower(s[i]) != tolower(s[j])) {
            isPalindrome = false;
            break;
        }
        i++;
        j--;
    }

    if (isPalindrome) {
        cout << "Palindrome";
    } else {
        cout << "Not Palindrome";
    }
}


