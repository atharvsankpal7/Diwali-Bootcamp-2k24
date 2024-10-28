#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> m;

    m["one"] = 1;
   

    pair<string, int> p= {"five", 90};
    // p.first;
    // p.second;
    
    m.insert(p);
    cout << m["five"];

    string five = "three";

    cout << m[five] << endl;
    return 0;
}