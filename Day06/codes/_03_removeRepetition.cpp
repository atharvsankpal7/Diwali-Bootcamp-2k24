#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    string solution;

    int n = s.size();
    int count = 1;
    for(int i = 0;i < n - 2; i++){
        if(s[i] == s[i + 1]){
            count++;
        }else{
            count = 1;
        }

        if(count <= 2){
            solution += s[i];
        }
    }
    solution.push_back(s[n - 1]);

    cout << solution;
    return 0;
}