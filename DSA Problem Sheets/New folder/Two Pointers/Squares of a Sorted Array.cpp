#include <bits/stdc++.h>
using namespace std;

//brute force approach
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        for(int i=0; i<n ; i++) {
            nums[i] = (nums[i] * nums[i]);
            
        }
        sort(nums.begin(), nums.end());
        return nums;
    }
};

//using two pointer
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);

        int i = 0;
        int j = n - 1;
        int k = n - 1;

        while (k >=0) {
            int a = nums[i] * nums[i];
            int b = nums[j] * nums[j];
            if (a > b) {
                ans[k] = a;
                i++;
            } else {
                ans[k] = b;
                j--;
            }
            k--;
        }

        return ans;
    }
};