#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str; cin >> str;
    //str.tolower();
    int s=0, e=str.size()-1;
    while (s < e) {
        if (str[s]!=str[e]) {
            cout << "Not palindrome";
            return 0;
        }
        s++;
        e--;
    }
    cout << "Palindrome";
}

