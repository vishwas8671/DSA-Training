#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int Pcount=0, Fcount=0;
    cout << "Enter the number of students : ";
    cin >> n;
    while (n--) {
        int marks;
        string s;
        //cout << "Enter the status and marks : ";
        cin >> s >> marks;
        if(s=="Pass" && marks >  75){
            Pcount++;
        }
        if(s=="Fail" && marks < 50) {
            Fcount++;
        }
    }
    cout <<"Pass count : " << Pcount << " " << "Fail Count : " << Fcount;
    return 0;
}
