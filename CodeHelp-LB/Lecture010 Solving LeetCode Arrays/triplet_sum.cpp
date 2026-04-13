#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> tripletSum(vector<int>& nums, int target) {
    vector<vector<int>> ans;
    int n = nums.size();

    sort(nums.begin(), nums.end());

    for (int i = 0; i < n; i++) {

        // skip duplicate fixed elements
        if (i > 0 && nums[i] == nums[i - 1]) continue;

        int l = i + 1, r = n - 1;

        while (l < r) {
            long long sum = nums[i] + nums[l] + nums[r];

            if (sum == target) {
                ans.push_back({nums[i], nums[l], nums[r]});
                l++;
                r--;

                // skip duplicates
                while (l < r && nums[l] == nums[l - 1]) l++;
                while (l < r && nums[r] == nums[r + 1]) r--;

            } else if (sum < target) {
                l++;
            } else {
                r--;
            }
        }
    }
    return ans;
}