#include <iostream>
#include <vector>
using namespace std;

int digitSum(int n)
{
    int sum = 0;

    while(n > 0)
    {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    for(int i = 0; i < n; i++)
        cout << digitSum(arr[i]) << " ";

    return 0;
}
