#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int n = s.size();
    int count = 0;
    for(int i = 0;i < n - 1; i++){
        if(s[i] == '1' && s[i+1] == '0'){
            count++;
        }
    }
    cout << count;
    return 0;
}