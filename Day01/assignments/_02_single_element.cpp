// https://leetcode.com/problems/single-number/description/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // input
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // main logic
    int solution = arr[0];
    for (int i = 1; i < n; i++)
    {
        solution = solution ^ arr[i];
    }
    // output
    cout << solution;
    return 0;
}
void anotherApproach(){
    // input
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // main logic
    int solution = arr[0];    
    sort(arr, arr + n);

    for(int i = 1; i < n; i += 2){
        if(i == n - 1 || arr[i] != arr[i - 1]){
            solution = arr[i - 1];
            break;
        }
    }

    // output
    cout << solution;
}