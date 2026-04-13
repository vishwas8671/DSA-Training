#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        map<int, vector<int>> mp;  
        vector<int> result;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                mp[i + j].push_back(mat[i][j]);
            }
        }
        bool flip = true;
        for (auto &it : mp) {
            if (flip) {
                reverse(it.second.begin(), it.second.end());
            }
            for (int num : it.second) {
                result.push_back(num);
            }
            flip = !flip;
        }

        return result;
    }
};

int main() {
    int m, n;
    cout << "Enter rows and columns: ";
    cin >> m >> n;

    vector<vector<int>> mat(m, vector<int>(n));
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }
    Solution sol;
    vector<int> ans = sol.findDiagonalOrder(mat);
    cout << "Diagonal Traversal: ";
    for (int x : ans) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
