#include <bits/stdc++.h>
using namespace std;
bool isHashMapsEqual(unordered_map<int, int> nCountMap, unordered_map<int, int> greaterNumberCountMap)
{
    if (nCountMap.size() != greaterNumberCountMap.size())
    {
        return false;
    }

    for (auto e : nCountMap)
    {
        int key = e.first;
        int count = e.second;
        if (greaterNumberCountMap.find(key) != greaterNumberCountMap.end())
        {
            if (count != greaterNumberCountMap[key])
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }
    return true;
}
unordered_map<int, int> numberCountMap(int n)
{
    unordered_map<int, int> nCountMap;

    int duplicate = n;
    while (duplicate > 0)
    {
        int r = duplicate % 10;
        nCountMap[r]++;
        duplicate /= 10;
    }
    return nCountMap;
}
int main()
{
    int n;
    cin >> n;

    unordered_map<int, int> nCountMap;
    int duplicate = n;
    while (duplicate > 0)
    {
        int r = duplicate % 10;
        nCountMap[r]++;
        duplicate /= 10;
    }

    int nextGreaterElement = n + 1;
    while (!isHashMapsEqual(nCountMap, numberCountMap(nextGreaterElement)))
    {
        nextGreaterElement++;
    }
    cout << nextGreaterElement << endl;

    return 0;
}