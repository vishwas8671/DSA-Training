#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int sum=0;
        for (int i=0; i<k; i++) {
            sum += nums[i];
        }
        int maxSum = sum;
        int start = 0;
        int end = k;
        while (end < n) {
            sum -= nums[start];
            start++;
            sum += nums[end];
            end++;
            maxSum = max(sum, maxSum);

        }
        
        return (double) maxSum/k;
    }
};

