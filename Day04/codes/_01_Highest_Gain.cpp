#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int size;
    cin >> size;
    vector<int> input(size);
    for(int i = 0; i < size; i++)
    {
        cin >> input[i];
    }
    int currAltitude = 0, maxAltitude = 0;
    for(auto e : input)
    {
        currAltitude += e;
        maxAltitude = max(maxAltitude, currAltitude);
    }
    cout << maxAltitude;
    return 0;
}