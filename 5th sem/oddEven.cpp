#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int evenNo, oddNo;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenNo += 1;
        }
        else
        {
            oddNo += 1;
        }
    }
    if (evenNo > oddNo)
    {
        cout << "EVEn";
    }
    else if (oddNo > evenNo)
    {
        cout << "ODD";
    }
    else
    {
        cout << "TIE";
    }
    return 0;
}