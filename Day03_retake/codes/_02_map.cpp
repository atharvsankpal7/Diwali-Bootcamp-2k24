#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> m;

    pair<string, int> p = {"o", 1};
    pair<string, int> p1 = {"t", 2};

    m["yes"] = 10;
    m.insert(p);
    m.insert(p1);
cout << "printing the map" << endl;
for (auto e : m)
    {
        // e.first -->key
        // e.second --> value
        cout << e.first << " : " << e.second << endl;
    }
    // m.erase("yes");
    // m.clear();
    m.size();

    // if(m.find("no") == m.end()){
    //     cout << "Element not in the map"<<endl;
    // }else{
    //     cout << "Element is in the map" << endl;
    // }
    cout << "printing the map" << endl;

    for (auto e : m)
    {
        // e.first -->key
        // e.second --> value
        cout << e.first << " : " << e.second << endl;
    }

    return 0;
}