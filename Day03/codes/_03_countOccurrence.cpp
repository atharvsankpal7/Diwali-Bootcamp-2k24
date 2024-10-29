#include <bits/stdc++.h>
using namespace std;

int main()
{
    // input
    int n;
    cin >> n;

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    // main logic
    //           vector's element, count
    unordered_map<int, int> um;

    for(int i = 0;i < n; i++){
        um[v[i]] += 1;
    }

    // output
    for(auto e : um){
        cout<< e.first <<" : " << e.second <<endl;
    }
    return 0;
}