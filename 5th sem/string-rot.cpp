#include <iostream>
using namespace std;

bool isRotation(string s, string t) {
    if (s.length() != t.length())
        return false;

    int n = s.length();

    for (int i = 0; i < n; i++) {
        string rotated = s.substr(i) + s.substr(0, i);

        if (rotated == t)
            return true;
    }

    return false;
}

int main() {
    string s, a, b;
    cin >> s >> a >> b;

    if (isRotation(s, a) && isRotation(s, b))
        cout << 1;
    else
        cout << -1;

    return 0;
}