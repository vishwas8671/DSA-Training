#include <bits/stdc++.h>
using namespace std;

int main () {
  int marks;
  cout << "Enter marks : ";
  cin >> marks;
  if (80 <= marks && marks <= 100) {
    cout << "Grade A";
  }
  else if (60 <= marks && marks <=79) {
    cout << "Grade B";
  }
  else if (50 <= marks && marks <= 59) {
    cout << "Grade C";
  }
  else if (45 <= marks && marks <= 49) {
    cout << "Grade D";
  }
  else if (25 <= marks && marks <= 44) {
    cout << "Grade E";
  }
  else {
    cout << "Fail";
  }
  return 0;
}
