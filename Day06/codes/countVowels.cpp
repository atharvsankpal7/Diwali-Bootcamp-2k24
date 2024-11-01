#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    // cin >> s;
    unordered_set<char> us({'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'});
    int count = 0;
    for(char c : s){
        if(us.find(c) !=us.end()){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}