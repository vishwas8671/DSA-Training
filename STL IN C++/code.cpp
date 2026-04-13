#include <bits/stdc++.h>
using namespace std;

int main () {
    vector<int> vec; //0
    vector<int> vec5 = {1, 2, 3, 4, 5}; 
    vector<int> vec6 (10, -1); //dynamic programming - tabulation DP[]...
    vector <int> vec1 = {1, 2, 3, 4, 5,6};
    vector <int> vec2(vec1);
    // vec.push_back(1);
    // vec.push_back(2);
    // vec.push_back(3);
    // vec.push_back(4);
    // vec.push_back(5);
    // vec.emplace_back(6);
    // vec.pop_back();
    for (int val : vec2) {
        cout << val << " ";
    }
    cout << endl;
    cout << vec.size() << endl;
    cout << vec.capacity() << endl;
    cout << "Value at index 2 : " << vec[2] << " or " << vec.at(2) << endl;
    cout << "Value at front : " << vec.front() << endl;
    cout << "Value at rear : " << vec.back() << endl;
    return 0;
}
