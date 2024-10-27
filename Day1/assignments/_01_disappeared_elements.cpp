// in leetcode they have given vector, but we can solve it using array too, you can revisit the problem after completing the day 2 of bootcamp
// https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/description/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // input
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // logic 

    // keeping track of which elements have appeared in the input array
    bool present[n + 1] = {false};
    
    for (int i = 0; i < n; i++) {
        // marking the index true for the current element
        present[arr[i]] = true;
    }
    
    // output
    for (int i = 1; i <= n; i++) {
        // for the elements which are missing the present array will have false in it's index value
        if (!present[i]) {
            cout << i << " ";
        }
    }
    cout << endl;
    
    return 0;
}