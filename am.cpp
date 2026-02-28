#include<iostream>
#include<string>
#include<vector>
using namespace std;
int maxEnergy (vector<int> ener)
{
    int  answer;
    int n = ener.size();
    int posSum = 0;
    int negSum =0;
    int i=0;
    while(i < n) {
        if ( i >= 0) {
            posSum += ener[i];
        } else {
            negSum += ener[i];
        }
    }
    answer = posSum + negSum;
    return answer;
}
int main()
{
    int ener_size;
    cin >> ener_size;
    vector<int> ener;
    for ( int idx = 0; idx < ener_size; idx++ )
    {
        int temp;
        cin >> temp;
        ener.push_back(temp);
    }
    int result = maxEnergy(ener);
    cout << result;
    return 0;
}
