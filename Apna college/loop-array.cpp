#include <iostream>
using namespace std;
 int main () {
    int size = 5;
    int marks [size];
    
    cout << "Enter the marks of students : " << endl;
    for (int i=0; i<size; i++) {
        cin >> marks[i] ;
    }

    cout << "The marks of students are : " << endl;
    for (int i=0; i<size; i++) {
        cout << marks[i] << endl;;
    }
    return 0;
 }
