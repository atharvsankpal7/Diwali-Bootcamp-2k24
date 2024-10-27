#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // main logic
    
    // approach 1. T.C. -->o(1)
    int naturalSum = (n * (n + 1)) / 2;

    // approach 2. T.C. -->o(n)
    int naturalSumForLoop = 0;
    for(int i = 0;i <= n;i++){
        naturalSumForLoop += i;
    }


    int actualSum = 0; // to avoid garbage value we give initial value as 0
    for (int i = 0; i < n; i++)
    {
        actualSum += arr[i];
    }
    cout << naturalSum - actualSum << endl;
    cout << naturalSumForLoop - actualSum << endl;
    return 0;
}