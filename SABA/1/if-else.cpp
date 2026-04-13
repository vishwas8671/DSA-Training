#include <bits/stdc++.h>
using namespace std;

int main() {
    int age;
    cin >> age;
    if (age >= 18 && age <= 45) {
        cout << "Your are adult";
    } else  if (age > 45) {
        cout << "an old age";
    } else {
        cout << "Not adult";
    }
}
