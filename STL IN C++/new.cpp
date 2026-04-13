#include <bits/stdc++.h>
using namespace std;

int main () {
    vector<int> vec = {1, 2, 3, 4, 5}; 
    // vec.erase(vec.begin() + 2);
    // vec.insert(vec.begin()+2, 100);
    vec.clear();
    
    for (int val : vec) {
        cout << val << " ";
    }
    cout << endl;

    cout << "Size" <<vec.size() << endl;
    cout << "CApacity" <<vec.capacity() << endl;
    return 0;
}
