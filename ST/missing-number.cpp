int missingNumber(int arr[], int n) {
    int sum = n * (n + 1) / 2;
    int curr = 0;
    for(int i = 0; i < n-1; i++)
        curr += arr[i];

    return sum - curr;
}
