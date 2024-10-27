// union of 2 vectors
// union with unique occurance
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // input
    vector<int> v1;
    vector<int> v2;

    int n1, n2;

    cin >> n1;
    cin >> n2;

    for(int i = 0;i < n1; i++){
        int x;
        cin >> x;
        v1.push_back(x);
    }

    for(int i = 0;i < n2; i++){
        int x;
        cin >> x;
        v2.push_back(x);
    }

    // main logic
    set<int> s(v1.begin(), v1.end());

    for(auto e : v2){
        s.insert(e);
    }

    for(auto e : s){
        cout << e << " ";
    }

    return 0;
}