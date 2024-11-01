#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> maximizeArray(int arr1[], int arr2[], int n)
    {
        set<int> s;

        // inserting elements in array for sorted order
        for (int i = 0; i < n; i++)
        {
            s.insert(arr1[i]);
            s.insert(arr2[i]);
        }

        // till set is of size n remove the smallest element
        // i.e first element
        while (s.size() != n)
        {
            s.erase(*s.begin());
        }

        vector<int> solution;
        // inserting the larger elements into solution vector

        for (int i = 0; i < n; i++)
        {
            if (s.find(arr2[i]) != s.end())
            {
                solution.push_back(arr2[i]);
                s.erase(arr2[i]);
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (s.find(arr1[i]) != s.end())
            {
                solution.push_back(arr1[i]);
                s.erase(arr1[i]);
            }
        }
        return solution;
    }
};