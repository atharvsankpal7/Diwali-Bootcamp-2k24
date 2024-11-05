#include <bits/stdc++.h>
using namespace std;

int main()
{
    // input
    int n;
    cin >> n;
    vector<int> v(n); 

    for(int i = 0;i < n; i++){
        cin >> v[i];
    }

    int maxSum = v[0];
    int currSum = 0;
    for(int i = 0;i < n; i++){
        currSum = 0;
        for(int j = i ; j < n; j++){
            currSum+=v[j];
            maxSum = max(maxSum, currSum);
        }
    }
    cout << "max sum is " << maxSum << endl;
    return 0;
}
