#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i=0;i<n;i++)
        cin >> arr[i];

    int k;
    cin >> k;

    sort(arr.begin(), arr.end());

    for(int i=0;i<k;i++)
        cout << arr[i] << " ";

    for(int i=n-1;i>=k;i--)
        cout << arr[i] << " ";

    return 0;
}