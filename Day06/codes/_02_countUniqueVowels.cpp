#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    // cin >> s;
    unordered_set<char> us({'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'});
    
    unordered_set<char> solution;
    for(char c : s){
        if(us.find(c) !=us.end()){
            solution.insert(c);
        }
    }
    cout << solution.size() << endl;
    return 0;
}