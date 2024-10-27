#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> v;

    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(4);

    // // cout << v[2];

    // cout << "size of v before pop_back() :" << v.size() << endl;
    // v.pop_back();
    // cout << "size of v after pop_back() :" << v.size() << endl;

    // vector<int> v1(15); // only size with either zero or G.V
    // // syntax --> vectorName(size, value);
    // vector<int> v2(10, 5); // Size with value

    // for(int i = 0;i < v1.size(); i++){
    //     cout << v1[i] << " ";
    // }
    // cout << endl;
    // // for each loop
    // for(auto a : v2){
    //     cout << a << " ";
    // }

    vector<int> v3;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v3.push_back(x);
    }

    // auto itBegin = v3.begin();
    // auto itEnd = v3.end();
    // cout << *(itBegin + 2);

    // reverse(v3.begin(), v3.end());

    // sort(v3.begin(), v3.end()); // (n)Log(n)
    // reverse(itBegin, itEnd);// n
    // 7 8 9 6 5  
    cout << v3.front() << endl;
    cout << v3.back() << endl;
    v3.pop_back(); // void
    cout << v3.back() << endl;

    for (auto e : v3)
    {
        cout << e << " ";
    }
    return 0;
}