#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> wtcs(n + 1);

    wtcs[1] = 1;
    wtcs[2] = 2;
    
    for(int i = 3; i <= n; i++){
        wtcs[i] = wtcs[i - 1] + wtcs[i - 2];
    }

    cout << wtcs[n];

    return 0;
}