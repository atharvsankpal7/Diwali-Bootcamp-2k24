/* Input:
N = 5
Arr = {1, 1, 1, 1, 1}
target = 1
Output:
5
Explanation: Frequency of 1 is 5.
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // vector<int> Arr;
    // for(int i = 0;i < n; i++){
    //     int x;
    //     cin >> x;
    //     Arr.push_back(x);
    // }

    vector<int> Arr(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        Arr[i] = x;
    }

    int target;
    cin >> target;
    int targetCount = count(Arr.begin(), Arr.end(), target);
    cout << targetCount << endl;
    auto itMax = max_element(Arr.begin(), Arr.end());
    auto itMin = min_element(Arr.begin(), Arr.end());
    cout << *itMax << endl;
    cout << *itMin << endl;
    // main logic
    int count = 0;
    for(auto e : Arr){
        if(e == target){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
