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

    map<int, int> m;
    // for(int i = 0;i < n; i++){
    //     m[v[i]] += 1;
    // }

    for (auto e : v)
    {
        m[e]++;
    }

    for (auto e : m)
    {
        cout << e.first << " : " << e.second << endl;
    }
    return 0;
}