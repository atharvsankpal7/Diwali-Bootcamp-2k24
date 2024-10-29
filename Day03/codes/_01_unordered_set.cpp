#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<int> us;
    set<int> s;

    us.insert(1);
    us.insert(4);
    us.insert(2);
    us.insert(3);
    us.insert(5);

    s.insert(4);
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(5);

    cout << "ordered set : " << endl;
    for (auto e : s)
    {
        cout << e << " " << endl;
    }

    cout << "unordered set : " << endl;
    for (auto e : us)
    {
        cout << e << " " << endl;
    }

    int target = 4;

    // o(1)
    // if(us.find(target) != us.end()){
    //     cout << "element exists in the unordered_set" << endl;
    // }else{
    //     cout << "element does not exist in the unordered_set" << endl;
    // }


    return 0;
}