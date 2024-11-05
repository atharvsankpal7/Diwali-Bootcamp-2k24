#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n); 

    for(int i = 0;i < n; i++){
        cin >> v[i];
    }

    vector<int> solution(n);

    for(int i = 0;i < n; i++){
        solution[i] = -1;
        for(int j = i + 1; j < n; j++){
            if(v[i] < v[j]){
                solution[i] = v[j];
                break;
            }
        }
    }

    for(auto e: solution){
        cout << e << " ";
    }
    return 0;
}

