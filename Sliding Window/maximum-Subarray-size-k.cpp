int maximumSumSubarray(vector<int>& arr, int k) {
    int n = arr.size();
    
    if (k > n) return -1;  // invalid case
    
    int windowSum = 0;
    
    // first window
    for (int i = 0; i < k; i++) {
        windowSum += arr[i];
    }
    
    int maxSum = windowSum;
    
    // slide window
    for (int i = k; i < n; i++) {
        windowSum += arr[i] - arr[i - k];
        maxSum = max(maxSum, windowSum);
    }
    
    return maxSum;
}
