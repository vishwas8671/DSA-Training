#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target) {
    int n= nums.size();
    int i;
    map<int,int> mp;
    for (i=0; i<n; i++) {
        int remaining = target - nums[i];
        if (mp.find(remaining) != mp.end()) {
            return {mp[remaining], i};
        }
        mp[nums[i]] = i;
    }
    return {};
}
